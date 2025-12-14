#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)22829;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2024056856U;
int zero = 0;
unsigned short var_15 = (unsigned short)54170;
unsigned long long int var_16 = 7949819387632006602ULL;
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
