#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65097;
unsigned short var_3 = (unsigned short)30706;
unsigned long long int var_7 = 4441428550588742868ULL;
long long int var_8 = 9152938379805471474LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)42974;
int zero = 0;
unsigned short var_14 = (unsigned short)41791;
short var_15 = (short)-6651;
signed char var_16 = (signed char)-68;
short var_17 = (short)1636;
long long int var_18 = -6676134773458621462LL;
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
