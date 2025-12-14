#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -543254368127905149LL;
int var_3 = 245780074;
unsigned char var_7 = (unsigned char)226;
unsigned long long int var_8 = 15031967059372803463ULL;
unsigned long long int var_10 = 1494122432926969272ULL;
int zero = 0;
unsigned long long int var_18 = 7745796199193300073ULL;
unsigned long long int var_19 = 1022582453384023558ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
