#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5091190227500652358ULL;
unsigned long long int var_8 = 16495625740629886607ULL;
unsigned char var_9 = (unsigned char)200;
int zero = 0;
unsigned char var_15 = (unsigned char)163;
signed char var_16 = (signed char)8;
void init() {
}

void checksum() {
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
