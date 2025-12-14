#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_6 = 210934977071456911LL;
signed char var_7 = (signed char)98;
long long int var_12 = 2181685983612134239LL;
unsigned char var_13 = (unsigned char)152;
int zero = 0;
signed char var_14 = (signed char)-33;
unsigned short var_15 = (unsigned short)21973;
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
