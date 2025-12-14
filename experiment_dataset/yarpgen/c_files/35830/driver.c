#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1999233184U;
unsigned int var_3 = 3698432452U;
unsigned int var_7 = 2674490946U;
unsigned int var_14 = 2542192574U;
unsigned int var_15 = 826729987U;
unsigned int var_17 = 1111957744U;
unsigned int var_18 = 4157369858U;
int zero = 0;
unsigned int var_20 = 1804669064U;
unsigned int var_21 = 3197642794U;
unsigned int var_22 = 3501634848U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
