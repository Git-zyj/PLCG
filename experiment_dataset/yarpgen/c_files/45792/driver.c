#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
int var_1 = -1797478313;
unsigned long long int var_7 = 4496804741018462771ULL;
unsigned long long int var_13 = 8122188444951921008ULL;
unsigned char var_15 = (unsigned char)247;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 7109867213665675672ULL;
signed char var_22 = (signed char)105;
unsigned long long int var_23 = 10563669646360692195ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
