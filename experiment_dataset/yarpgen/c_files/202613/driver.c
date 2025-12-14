#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29777;
unsigned long long int var_4 = 7300186015995390446ULL;
unsigned short var_5 = (unsigned short)23336;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3558082282U;
unsigned int var_17 = 216799279U;
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
