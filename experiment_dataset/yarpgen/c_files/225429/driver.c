#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4181539885583572423ULL;
unsigned int var_7 = 3375055571U;
short var_14 = (short)-32236;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-34;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
unsigned char var_21 = (unsigned char)157;
unsigned char var_22 = (unsigned char)142;
signed char var_23 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
