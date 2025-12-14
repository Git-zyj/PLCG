#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3310871158U;
unsigned int var_6 = 3831238115U;
unsigned char var_9 = (unsigned char)251;
int zero = 0;
unsigned int var_10 = 2914333559U;
unsigned int var_11 = 1876825189U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
