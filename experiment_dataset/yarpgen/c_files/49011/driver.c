#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)226;
signed char var_7 = (signed char)34;
signed char var_11 = (signed char)1;
int zero = 0;
unsigned short var_13 = (unsigned short)45379;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17038845957803584239ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
