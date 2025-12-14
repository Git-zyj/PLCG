#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 550957682;
signed char var_5 = (signed char)-76;
unsigned long long int var_7 = 8772563737740723761ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)61056;
int var_13 = 69784670;
int var_14 = 1931732941;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
