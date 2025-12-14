#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)93;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)16;
int zero = 0;
unsigned long long int var_11 = 5271266595617074184ULL;
unsigned char var_12 = (unsigned char)150;
unsigned long long int var_13 = 6468579086007721873ULL;
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
