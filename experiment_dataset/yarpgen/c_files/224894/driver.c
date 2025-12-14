#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4449201748403194743LL;
unsigned short var_5 = (unsigned short)39258;
short var_8 = (short)-27383;
long long int var_9 = -7246392992019764370LL;
int zero = 0;
unsigned short var_12 = (unsigned short)36727;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
