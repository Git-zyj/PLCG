#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18307;
signed char var_2 = (signed char)19;
unsigned char var_4 = (unsigned char)103;
long long int var_7 = 5789511437393464513LL;
int zero = 0;
unsigned char var_16 = (unsigned char)129;
unsigned short var_17 = (unsigned short)23227;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3978759080134656394LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
