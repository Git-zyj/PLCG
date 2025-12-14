#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-98;
int var_5 = 474308595;
unsigned char var_7 = (unsigned char)38;
long long int var_8 = 2047327010231143338LL;
signed char var_11 = (signed char)-27;
int zero = 0;
int var_13 = 921109128;
unsigned long long int var_14 = 8873432021007921730ULL;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
