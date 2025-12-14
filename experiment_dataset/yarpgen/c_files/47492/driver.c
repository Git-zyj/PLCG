#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 833051049;
unsigned long long int var_15 = 4510702181155159388ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 11023443796493760555ULL;
unsigned long long int var_18 = 7198336767449520890ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
