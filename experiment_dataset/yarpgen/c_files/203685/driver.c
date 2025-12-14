#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-65;
signed char var_9 = (signed char)106;
unsigned int var_11 = 397721794U;
unsigned long long int var_15 = 13953859870912543093ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)17;
unsigned long long int var_17 = 13086232502910135126ULL;
unsigned int var_18 = 2783057003U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
