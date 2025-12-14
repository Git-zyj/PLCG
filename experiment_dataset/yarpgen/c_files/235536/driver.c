#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_7 = (unsigned short)41378;
unsigned char var_9 = (unsigned char)71;
int zero = 0;
unsigned long long int var_10 = 3506610578294427676ULL;
unsigned long long int var_11 = 8772596184343627909ULL;
unsigned long long int var_12 = 1266715015382643522ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
