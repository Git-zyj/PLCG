#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)37;
unsigned long long int var_2 = 10755682582081452191ULL;
long long int var_3 = 3929077791649077889LL;
int var_4 = 1400745025;
short var_5 = (short)6745;
long long int var_6 = 4593735716333728498LL;
signed char var_7 = (signed char)13;
unsigned char var_8 = (unsigned char)226;
signed char var_9 = (signed char)-92;
signed char var_11 = (signed char)18;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1500443029725190261LL;
unsigned short var_14 = (unsigned short)56120;
unsigned short var_15 = (unsigned short)27741;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
