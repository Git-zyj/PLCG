#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 253898623U;
_Bool var_2 = (_Bool)0;
short var_3 = (short)10896;
signed char var_4 = (signed char)44;
short var_5 = (short)-21958;
short var_7 = (short)3682;
unsigned int var_9 = 274384618U;
long long int var_10 = 2018292970994158702LL;
int zero = 0;
unsigned int var_11 = 3219056864U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 13591021767277858905ULL;
unsigned int var_14 = 143775291U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
