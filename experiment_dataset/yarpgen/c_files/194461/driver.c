#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27464;
int var_3 = 1791918229;
unsigned int var_7 = 4131353145U;
_Bool var_8 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -1297035556;
signed char var_14 = (signed char)-43;
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
