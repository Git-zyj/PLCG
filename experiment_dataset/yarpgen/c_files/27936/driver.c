#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2097276055U;
int var_8 = 813126604;
unsigned short var_9 = (unsigned short)17353;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)4390;
unsigned char var_17 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
