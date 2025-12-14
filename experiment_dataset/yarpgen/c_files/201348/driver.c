#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
unsigned long long int var_1 = 17213158460574692639ULL;
unsigned long long int var_3 = 16278569617087171977ULL;
unsigned int var_4 = 659100183U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)71;
short var_13 = (short)-17619;
void init() {
}

void checksum() {
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
