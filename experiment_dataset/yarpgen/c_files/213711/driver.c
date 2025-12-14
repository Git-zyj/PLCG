#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -798003711;
short var_3 = (short)-12837;
int var_8 = 295301519;
_Bool var_9 = (_Bool)1;
int var_11 = -948509770;
unsigned char var_12 = (unsigned char)39;
int var_13 = -1340501234;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-21823;
signed char var_19 = (signed char)56;
short var_20 = (short)-29155;
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
