#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)477;
int var_6 = -657254159;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)20659;
unsigned long long int var_14 = 17137246787050015098ULL;
unsigned long long int var_15 = 16202413642293337884ULL;
int zero = 0;
unsigned long long int var_16 = 1422397242516957416ULL;
long long int var_17 = -8714123164254288031LL;
long long int var_18 = 8487376939418161816LL;
signed char var_19 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
