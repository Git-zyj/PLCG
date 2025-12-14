#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4321041662902132228LL;
unsigned char var_1 = (unsigned char)211;
unsigned int var_3 = 229069858U;
int zero = 0;
unsigned int var_10 = 391563204U;
signed char var_11 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
