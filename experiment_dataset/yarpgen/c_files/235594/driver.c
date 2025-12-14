#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)45;
unsigned short var_6 = (unsigned short)35226;
unsigned short var_7 = (unsigned short)713;
long long int var_9 = -5255763359969199580LL;
unsigned long long int var_16 = 16100961538432453743ULL;
int zero = 0;
unsigned int var_18 = 4099633643U;
unsigned long long int var_19 = 11379887829074169839ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
