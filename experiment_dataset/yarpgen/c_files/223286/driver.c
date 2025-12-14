#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-30661;
unsigned char var_10 = (unsigned char)194;
signed char var_15 = (signed char)21;
int zero = 0;
int var_17 = -140116646;
long long int var_18 = -3738183680333645545LL;
int var_19 = 1955158987;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
