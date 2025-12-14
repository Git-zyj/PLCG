#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)115;
signed char var_3 = (signed char)-43;
unsigned int var_4 = 3092739496U;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-14984;
unsigned char var_12 = (unsigned char)8;
unsigned long long int var_13 = 4312446579568431042ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
