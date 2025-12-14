#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
unsigned int var_3 = 2398442741U;
unsigned int var_4 = 2067458477U;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 618832678U;
unsigned char var_9 = (unsigned char)51;
unsigned long long int var_11 = 14155670541687304976ULL;
signed char var_13 = (signed char)70;
unsigned char var_14 = (unsigned char)254;
short var_15 = (short)13265;
int zero = 0;
signed char var_18 = (signed char)-37;
short var_19 = (short)7539;
short var_20 = (short)-28115;
unsigned int var_21 = 2759310399U;
unsigned long long int var_22 = 12943875449700948359ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
