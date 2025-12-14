#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12253409795493686281ULL;
unsigned int var_3 = 927145302U;
unsigned short var_13 = (unsigned short)26528;
int zero = 0;
int var_15 = 1935104049;
int var_16 = 621271781;
unsigned long long int var_17 = 12503067649408079304ULL;
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
