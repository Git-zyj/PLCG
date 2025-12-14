#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1782153914U;
unsigned int var_7 = 561043072U;
int zero = 0;
unsigned char var_11 = (unsigned char)111;
long long int var_12 = 5819549666937686839LL;
signed char var_13 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
