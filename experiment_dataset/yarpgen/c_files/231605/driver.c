#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
unsigned int var_1 = 3028909534U;
short var_2 = (short)5676;
unsigned char var_4 = (unsigned char)215;
int var_6 = 1547269241;
long long int var_7 = -6618574129289744909LL;
unsigned short var_8 = (unsigned short)65008;
unsigned short var_9 = (unsigned short)42694;
unsigned int var_10 = 2446348140U;
long long int var_12 = -3038502951832022620LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)29876;
unsigned long long int var_17 = 16959841192075730186ULL;
int zero = 0;
unsigned long long int var_19 = 4654549196316393395ULL;
unsigned int var_20 = 4207172114U;
long long int var_21 = -4461755559318682973LL;
int var_22 = 2057861880;
long long int var_23 = 6669474192779037404LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
