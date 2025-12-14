#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43689;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)35684;
int var_9 = -436189537;
int zero = 0;
unsigned short var_10 = (unsigned short)56286;
unsigned short var_11 = (unsigned short)57523;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
