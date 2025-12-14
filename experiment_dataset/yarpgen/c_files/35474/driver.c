#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)131;
unsigned int var_5 = 4064829253U;
_Bool var_11 = (_Bool)0;
short var_13 = (short)27684;
int zero = 0;
short var_14 = (short)9673;
unsigned short var_15 = (unsigned short)27028;
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
