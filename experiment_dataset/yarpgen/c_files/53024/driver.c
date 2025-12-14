#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -43790168;
signed char var_16 = (signed char)-51;
int zero = 0;
short var_20 = (short)32760;
short var_21 = (short)9652;
unsigned char var_22 = (unsigned char)75;
long long int var_23 = 9055911777521111275LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
