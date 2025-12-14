#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)218;
unsigned long long int var_11 = 18315359479247162263ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)22748;
signed char var_15 = (signed char)-66;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 450316748U;
unsigned short var_18 = (unsigned short)27952;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
