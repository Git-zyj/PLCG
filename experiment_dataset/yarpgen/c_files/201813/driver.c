#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)64;
unsigned int var_6 = 3445533400U;
long long int var_7 = 3610153220783801049LL;
long long int var_9 = 7635380103666919562LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 1674806921U;
void init() {
}

void checksum() {
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
