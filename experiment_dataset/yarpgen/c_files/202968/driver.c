#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2327482721U;
long long int var_2 = -923879111563045865LL;
long long int var_3 = -5418772108056534531LL;
unsigned short var_4 = (unsigned short)7336;
short var_5 = (short)-5735;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-31;
long long int var_15 = 6428786784708139586LL;
short var_16 = (short)14813;
int zero = 0;
unsigned int var_18 = 2819270404U;
unsigned long long int var_19 = 8707259133483917049ULL;
unsigned char var_20 = (unsigned char)109;
int var_21 = -516476521;
unsigned short var_22 = (unsigned short)52720;
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
