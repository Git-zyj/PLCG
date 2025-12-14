#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3046753878U;
signed char var_5 = (signed char)72;
unsigned long long int var_11 = 1120366980722139290ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)11675;
unsigned char var_13 = (unsigned char)150;
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
