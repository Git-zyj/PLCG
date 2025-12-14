#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 3270127212040451791LL;
short var_10 = (short)-10108;
long long int var_11 = 3867652771435937250LL;
int zero = 0;
unsigned short var_14 = (unsigned short)62124;
unsigned long long int var_15 = 2175384411731109122ULL;
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
