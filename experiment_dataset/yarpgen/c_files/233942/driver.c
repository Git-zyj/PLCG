#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17943;
unsigned char var_1 = (unsigned char)105;
short var_2 = (short)20285;
signed char var_3 = (signed char)-46;
unsigned long long int var_4 = 14423248655223708315ULL;
_Bool var_7 = (_Bool)0;
int var_9 = 1422001675;
unsigned long long int var_11 = 6788291418929439545ULL;
signed char var_12 = (signed char)114;
int var_14 = 1251957157;
unsigned int var_15 = 3413288071U;
int zero = 0;
short var_17 = (short)10992;
unsigned long long int var_18 = 10992105892188588005ULL;
short var_19 = (short)-3247;
unsigned int var_20 = 1772827001U;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
