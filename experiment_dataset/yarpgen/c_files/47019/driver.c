#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
short var_1 = (short)-30416;
unsigned char var_2 = (unsigned char)109;
signed char var_3 = (signed char)111;
long long int var_7 = 2056934668813489719LL;
int zero = 0;
long long int var_14 = -5794706576011227159LL;
short var_15 = (short)12456;
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
