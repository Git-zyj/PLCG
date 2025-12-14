#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 979446023;
unsigned long long int var_1 = 4892936759435328240ULL;
_Bool var_4 = (_Bool)0;
short var_8 = (short)-19210;
unsigned long long int var_9 = 4303870655778742545ULL;
int zero = 0;
unsigned int var_10 = 1388751752U;
unsigned char var_11 = (unsigned char)134;
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
