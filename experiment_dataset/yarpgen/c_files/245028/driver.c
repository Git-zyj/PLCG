#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1423501660085752489ULL;
unsigned long long int var_6 = 17331833814880006750ULL;
unsigned char var_8 = (unsigned char)161;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-65;
signed char var_17 = (signed char)-45;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
