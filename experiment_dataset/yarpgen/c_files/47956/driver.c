#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)20;
_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)-96;
_Bool var_5 = (_Bool)1;
int var_6 = -1699339783;
unsigned int var_7 = 4174646595U;
long long int var_9 = -8844235523965112446LL;
unsigned short var_12 = (unsigned short)44793;
_Bool var_13 = (_Bool)0;
short var_14 = (short)29882;
int zero = 0;
signed char var_15 = (signed char)-58;
unsigned char var_16 = (unsigned char)155;
long long int var_17 = -2078216655419968851LL;
short var_18 = (short)4082;
unsigned int var_19 = 682021960U;
int var_20 = -799877847;
short var_21 = (short)-25850;
unsigned int var_22 = 3205709797U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
