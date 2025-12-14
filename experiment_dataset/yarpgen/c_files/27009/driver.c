#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8450098051309678836LL;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)43307;
unsigned int var_5 = 2563078793U;
int var_9 = -712931236;
unsigned long long int var_10 = 827750748864819431ULL;
unsigned long long int var_11 = 9077621698943077805ULL;
int var_15 = -1745055315;
int var_16 = 1515629350;
unsigned int var_18 = 3614969045U;
unsigned char var_19 = (unsigned char)126;
int zero = 0;
short var_20 = (short)18752;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-40;
unsigned int var_23 = 371484278U;
_Bool var_24 = (_Bool)1;
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
