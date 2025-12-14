#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-16;
signed char var_2 = (signed char)-24;
int var_3 = 359433160;
int var_4 = -1715052900;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 2479538389U;
signed char var_9 = (signed char)98;
int zero = 0;
int var_11 = -441879081;
int var_12 = 27403742;
void init() {
}

void checksum() {
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
