#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)30;
unsigned int var_17 = 794338684U;
signed char var_18 = (signed char)111;
int zero = 0;
unsigned long long int var_20 = 12803090723210079138ULL;
unsigned int var_21 = 3293009883U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
