#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4566251581971428036LL;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)57;
unsigned char var_11 = (unsigned char)253;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_17 = -1430646488;
unsigned long long int var_18 = 7135728942697045220ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
