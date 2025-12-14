#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)32605;
long long int var_9 = -1332901606007091162LL;
unsigned long long int var_12 = 9357607156362415826ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)51462;
unsigned int var_16 = 3349345351U;
unsigned int var_17 = 1341772484U;
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
