#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2158145329U;
long long int var_9 = 4765141955632580638LL;
int var_13 = 735124975;
signed char var_16 = (signed char)40;
int zero = 0;
long long int var_18 = 2290970810152433321LL;
unsigned char var_19 = (unsigned char)136;
int var_20 = 1644079271;
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
