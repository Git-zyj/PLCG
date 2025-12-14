#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -441798398;
long long int var_15 = 3372715849616048731LL;
unsigned long long int var_16 = 9553969770569314023ULL;
unsigned int var_19 = 3861137646U;
int zero = 0;
unsigned int var_20 = 974325326U;
signed char var_21 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
