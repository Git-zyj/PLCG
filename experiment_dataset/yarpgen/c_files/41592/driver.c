#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
long long int var_8 = 1300103663915381528LL;
unsigned short var_10 = (unsigned short)13749;
long long int var_12 = -3316028664722730431LL;
int zero = 0;
signed char var_16 = (signed char)110;
signed char var_17 = (signed char)-1;
unsigned char var_18 = (unsigned char)175;
void init() {
}

void checksum() {
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
