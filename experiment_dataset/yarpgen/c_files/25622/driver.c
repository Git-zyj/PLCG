#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4518020588212569097LL;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-26276;
unsigned long long int var_12 = 8371130104176350194ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)49;
int var_15 = -1638162612;
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
