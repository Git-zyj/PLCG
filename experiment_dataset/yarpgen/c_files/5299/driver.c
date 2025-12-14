#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)43;
unsigned char var_7 = (unsigned char)204;
unsigned int var_8 = 3414273604U;
unsigned char var_9 = (unsigned char)133;
int zero = 0;
unsigned long long int var_10 = 17134337392350196711ULL;
unsigned char var_11 = (unsigned char)212;
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
