#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2558585946U;
unsigned int var_14 = 1757261801U;
int zero = 0;
unsigned short var_17 = (unsigned short)34819;
unsigned char var_18 = (unsigned char)228;
unsigned char var_19 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
