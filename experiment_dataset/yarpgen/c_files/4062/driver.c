#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15595995299571350849ULL;
unsigned long long int var_1 = 11282428988156027132ULL;
unsigned char var_2 = (unsigned char)132;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 10659311298249665673ULL;
int var_7 = 1528120165;
unsigned short var_9 = (unsigned short)24388;
unsigned char var_10 = (unsigned char)61;
signed char var_13 = (signed char)-123;
int zero = 0;
int var_14 = -1264384820;
unsigned char var_15 = (unsigned char)185;
unsigned char var_16 = (unsigned char)238;
unsigned int var_17 = 1132157329U;
unsigned short var_18 = (unsigned short)5818;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)160;
unsigned int var_21 = 844734663U;
unsigned int var_22 = 3865031449U;
signed char var_23 = (signed char)118;
unsigned long long int var_24 = 2704082014757228230ULL;
unsigned long long int var_25 = 2201996570779481083ULL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)36288;
_Bool var_28 = (_Bool)1;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
