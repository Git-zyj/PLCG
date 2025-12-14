#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2844410717U;
unsigned long long int var_2 = 3776561112214665495ULL;
short var_3 = (short)9520;
unsigned long long int var_6 = 16343415754025756988ULL;
unsigned short var_7 = (unsigned short)35032;
int zero = 0;
signed char var_13 = (signed char)-50;
unsigned short var_14 = (unsigned short)2943;
unsigned short var_15 = (unsigned short)35238;
short var_16 = (short)-31599;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
