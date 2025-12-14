#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -520038550;
unsigned long long int var_3 = 17507309327553874625ULL;
unsigned char var_4 = (unsigned char)34;
short var_5 = (short)-19107;
unsigned int var_7 = 4272994588U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 2575221549090343361ULL;
signed char var_10 = (signed char)7;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)118;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)175;
int zero = 0;
short var_17 = (short)3750;
signed char var_18 = (signed char)-23;
unsigned long long int var_19 = 12454588983986204700ULL;
int var_20 = 1555515452;
unsigned long long int var_21 = 11750567187180170140ULL;
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
