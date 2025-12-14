#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
short var_1 = (short)-28108;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 3724514280U;
long long int var_5 = -8820025973802619853LL;
int var_6 = -248956104;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)-65;
unsigned short var_9 = (unsigned short)19108;
unsigned long long int var_10 = 1232891221779881781ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)54659;
unsigned int var_15 = 2164079405U;
unsigned long long int var_16 = 16047032601191788882ULL;
long long int var_17 = 4825346864834776743LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
