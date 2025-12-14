#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 17444639237388712242ULL;
unsigned char var_11 = (unsigned char)66;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_16 = -1588205120;
int var_17 = 1035555128;
unsigned int var_18 = 3885308162U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
