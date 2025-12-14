#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1903424175;
unsigned short var_5 = (unsigned short)3773;
unsigned int var_7 = 1444306975U;
unsigned long long int var_11 = 11582422961197731435ULL;
unsigned short var_12 = (unsigned short)53733;
unsigned char var_13 = (unsigned char)9;
int var_14 = -474483038;
int var_16 = -1002805053;
unsigned short var_18 = (unsigned short)56018;
long long int var_19 = 3068842061278075938LL;
int zero = 0;
unsigned long long int var_20 = 12899022478711287991ULL;
int var_21 = -989243219;
unsigned char var_22 = (unsigned char)86;
long long int var_23 = 2685396795460739234LL;
long long int var_24 = -602686071294719207LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
