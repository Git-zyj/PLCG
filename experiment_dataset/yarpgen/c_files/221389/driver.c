#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)49259;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 9546640892648434844ULL;
unsigned int var_10 = 1961020555U;
int var_16 = -62650273;
long long int var_18 = 3394034927969158072LL;
int zero = 0;
unsigned short var_19 = (unsigned short)54436;
unsigned short var_20 = (unsigned short)44887;
unsigned char var_21 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
