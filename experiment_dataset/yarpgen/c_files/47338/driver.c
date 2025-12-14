#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 876759339U;
unsigned int var_13 = 1712435251U;
unsigned int var_15 = 3252275568U;
int zero = 0;
unsigned int var_17 = 387097313U;
unsigned int var_18 = 2431741044U;
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
