#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11080;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)139;
unsigned long long int var_4 = 16187740858853711099ULL;
long long int var_6 = 5259440838851435370LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-15543;
int zero = 0;
long long int var_14 = 8473986185309798140LL;
unsigned short var_15 = (unsigned short)41471;
short var_16 = (short)13384;
unsigned long long int var_17 = 16762866561490403243ULL;
unsigned char var_18 = (unsigned char)206;
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
