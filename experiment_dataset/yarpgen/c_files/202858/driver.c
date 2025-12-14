#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4938901959241612079LL;
_Bool var_2 = (_Bool)1;
long long int var_3 = 6701214201290508747LL;
short var_5 = (short)-16946;
short var_6 = (short)7843;
unsigned short var_9 = (unsigned short)29094;
long long int var_10 = 7228881306735703142LL;
int var_11 = -1095579595;
int var_14 = 1428310476;
short var_15 = (short)-16207;
int zero = 0;
signed char var_17 = (signed char)-114;
unsigned char var_18 = (unsigned char)5;
_Bool var_19 = (_Bool)1;
int var_20 = 162241752;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
