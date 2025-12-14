#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12221;
_Bool var_5 = (_Bool)0;
int var_8 = -1869888514;
unsigned char var_9 = (unsigned char)103;
int var_11 = 1376290715;
_Bool var_14 = (_Bool)0;
long long int var_17 = -8739721808649736750LL;
int zero = 0;
unsigned long long int var_19 = 10680092087103035441ULL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 5511696766255235595LL;
_Bool var_22 = (_Bool)1;
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
