#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6566654933355992012ULL;
unsigned long long int var_4 = 5076409767333576961ULL;
unsigned int var_5 = 3414469532U;
int var_7 = 338262773;
int zero = 0;
int var_17 = -1730568460;
int var_18 = 883578754;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
