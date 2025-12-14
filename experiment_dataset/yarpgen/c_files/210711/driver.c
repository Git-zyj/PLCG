#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2983955275960553383LL;
unsigned int var_2 = 2278929990U;
signed char var_3 = (signed char)-48;
unsigned char var_4 = (unsigned char)159;
unsigned short var_5 = (unsigned short)2928;
short var_7 = (short)-12277;
unsigned short var_8 = (unsigned short)9227;
short var_10 = (short)22694;
_Bool var_11 = (_Bool)1;
short var_12 = (short)796;
int zero = 0;
long long int var_14 = 945214239110416622LL;
int var_15 = 794742806;
unsigned long long int var_16 = 12992364780953791045ULL;
unsigned int var_17 = 3347274688U;
signed char var_18 = (signed char)82;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
