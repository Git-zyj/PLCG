#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-27;
unsigned int var_2 = 1039545320U;
short var_3 = (short)-14289;
unsigned int var_7 = 484194015U;
long long int var_9 = -1655705974448693885LL;
unsigned char var_11 = (unsigned char)31;
int zero = 0;
unsigned int var_14 = 4286542015U;
long long int var_15 = 6768912541357670933LL;
long long int var_16 = 8749627491615065266LL;
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
