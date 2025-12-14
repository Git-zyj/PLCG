#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14303590709123070137ULL;
unsigned long long int var_2 = 17988362264609182708ULL;
unsigned short var_8 = (unsigned short)20712;
int var_9 = -1842529667;
int zero = 0;
unsigned int var_14 = 2128692508U;
unsigned int var_15 = 235551708U;
int var_16 = 88835371;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
