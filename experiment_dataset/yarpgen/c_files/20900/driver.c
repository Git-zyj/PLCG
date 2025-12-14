#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)53074;
signed char var_5 = (signed char)-98;
int var_6 = 1202467582;
unsigned short var_7 = (unsigned short)35454;
long long int var_10 = 8373323535460829763LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 13186574998181924032ULL;
long long int var_16 = -2679869286813971922LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
