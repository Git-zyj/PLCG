#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12529451385685515921ULL;
unsigned long long int var_7 = 9669587821597361722ULL;
unsigned short var_10 = (unsigned short)49698;
int zero = 0;
unsigned long long int var_12 = 2185681640549123538ULL;
int var_13 = -941749371;
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
