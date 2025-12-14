#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned char var_6 = (unsigned char)225;
short var_8 = (short)22614;
signed char var_9 = (signed char)41;
short var_10 = (short)14660;
signed char var_14 = (signed char)84;
unsigned long long int var_16 = 799208738020787685ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)69;
int var_18 = -1421484615;
unsigned char var_19 = (unsigned char)218;
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
