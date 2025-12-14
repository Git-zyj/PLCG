#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)94;
int var_3 = 1571440152;
long long int var_4 = -4504314761731034699LL;
unsigned char var_7 = (unsigned char)84;
signed char var_8 = (signed char)22;
_Bool var_9 = (_Bool)0;
int var_13 = -1787591099;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 13768970074079426471ULL;
long long int var_16 = -6089223541412852566LL;
unsigned long long int var_17 = 72587972590781073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
