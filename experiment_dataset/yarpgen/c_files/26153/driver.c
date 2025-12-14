#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 221234714U;
unsigned char var_3 = (unsigned char)123;
unsigned long long int var_4 = 17977968263588499835ULL;
long long int var_5 = -3284221944088010641LL;
unsigned char var_11 = (unsigned char)81;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3736977339U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
