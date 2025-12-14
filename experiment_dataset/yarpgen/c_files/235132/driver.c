#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)129;
signed char var_3 = (signed char)-119;
unsigned long long int var_4 = 17436305298210639963ULL;
unsigned long long int var_5 = 11665132125147763185ULL;
unsigned long long int var_6 = 10344370384439845984ULL;
short var_8 = (short)9618;
signed char var_9 = (signed char)71;
int zero = 0;
int var_10 = -752856763;
unsigned long long int var_11 = 11924669300013395909ULL;
short var_12 = (short)-29828;
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
