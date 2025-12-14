#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1708750225;
unsigned char var_2 = (unsigned char)12;
unsigned char var_6 = (unsigned char)228;
long long int var_8 = 5781794062044691285LL;
_Bool var_9 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)64;
unsigned long long int var_16 = 1692658080705754293ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
