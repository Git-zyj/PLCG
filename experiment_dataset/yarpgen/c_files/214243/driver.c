#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
unsigned long long int var_9 = 4798654562279169482ULL;
unsigned int var_11 = 1811922032U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3299768413U;
unsigned long long int var_16 = 11029111454542535670ULL;
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
