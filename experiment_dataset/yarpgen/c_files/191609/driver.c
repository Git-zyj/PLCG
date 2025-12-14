#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11363254236473623447ULL;
unsigned long long int var_5 = 7451044107974776790ULL;
long long int var_6 = 8580224824780829700LL;
signed char var_7 = (signed char)57;
signed char var_8 = (signed char)6;
int zero = 0;
long long int var_10 = -8149404791609817777LL;
unsigned char var_11 = (unsigned char)110;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
