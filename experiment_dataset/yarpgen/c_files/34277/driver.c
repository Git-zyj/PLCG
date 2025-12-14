#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 17111394370595394691ULL;
long long int var_6 = -370385894428175758LL;
unsigned char var_7 = (unsigned char)71;
int zero = 0;
signed char var_18 = (signed char)105;
unsigned char var_19 = (unsigned char)171;
int var_20 = 988518600;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
