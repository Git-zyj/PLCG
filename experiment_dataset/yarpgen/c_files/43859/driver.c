#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8089;
unsigned long long int var_3 = 3367174355194376490ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3009737238U;
int zero = 0;
unsigned char var_13 = (unsigned char)62;
signed char var_14 = (signed char)-15;
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
