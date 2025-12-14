#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)35;
unsigned long long int var_1 = 15344328316670880084ULL;
signed char var_2 = (signed char)95;
unsigned short var_3 = (unsigned short)19594;
long long int var_4 = -4064545796299531504LL;
short var_5 = (short)-25404;
long long int var_9 = -5879120947292561224LL;
unsigned int var_12 = 982773111U;
_Bool var_14 = (_Bool)1;
unsigned long long int var_17 = 12108575387718946307ULL;
int zero = 0;
signed char var_19 = (signed char)97;
unsigned short var_20 = (unsigned short)5698;
unsigned int var_21 = 4026213527U;
signed char var_22 = (signed char)-59;
void init() {
}

void checksum() {
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
