#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5551217006917785698LL;
unsigned char var_5 = (unsigned char)145;
int var_9 = 247011594;
int zero = 0;
long long int var_11 = -7091030043048550240LL;
unsigned int var_12 = 3391552860U;
short var_13 = (short)-5444;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
