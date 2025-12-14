#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)17339;
_Bool var_7 = (_Bool)1;
unsigned short var_10 = (unsigned short)57589;
unsigned short var_12 = (unsigned short)5745;
long long int var_13 = 8812571001330678649LL;
int zero = 0;
long long int var_14 = 28519829963388092LL;
signed char var_15 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
