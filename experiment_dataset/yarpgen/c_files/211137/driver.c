#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 781490800402322822ULL;
long long int var_1 = 2211110296004542112LL;
signed char var_3 = (signed char)29;
short var_4 = (short)-20256;
long long int var_6 = 2841936021188706110LL;
long long int var_10 = 1790723323442494610LL;
int var_11 = 1836670435;
int zero = 0;
long long int var_16 = -8837028020693960719LL;
long long int var_17 = -8685930865301446001LL;
long long int var_18 = 4197377863227680117LL;
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
