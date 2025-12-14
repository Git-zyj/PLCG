#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1505975229U;
long long int var_9 = 4567326058995112881LL;
long long int var_17 = -4555687474173906798LL;
int zero = 0;
unsigned int var_20 = 262867365U;
unsigned int var_21 = 652098155U;
long long int var_22 = -6303764515057019417LL;
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
