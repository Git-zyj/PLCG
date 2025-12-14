#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 4043606290U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)202;
long long int var_10 = 5900951946340607650LL;
long long int var_12 = -3136630174239227952LL;
signed char var_14 = (signed char)43;
int zero = 0;
unsigned char var_15 = (unsigned char)149;
long long int var_16 = 9013695410335185316LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
