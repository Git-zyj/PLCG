#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)4418;
unsigned int var_3 = 1853988738U;
short var_5 = (short)-27255;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)-65;
int zero = 0;
short var_10 = (short)-30179;
int var_11 = 1886192356;
unsigned int var_12 = 425614065U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
