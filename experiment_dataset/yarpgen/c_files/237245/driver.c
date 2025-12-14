#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)219;
unsigned int var_1 = 1636717701U;
unsigned char var_4 = (unsigned char)0;
short var_7 = (short)17725;
unsigned short var_9 = (unsigned short)27159;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 11090774914126960856ULL;
unsigned char var_13 = (unsigned char)37;
unsigned char var_14 = (unsigned char)32;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-19137;
short var_20 = (short)21675;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
