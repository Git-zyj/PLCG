#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21573;
short var_6 = (short)15479;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3665963570U;
int zero = 0;
unsigned short var_10 = (unsigned short)20317;
unsigned char var_11 = (unsigned char)141;
unsigned char var_12 = (unsigned char)70;
int var_13 = -1130716562;
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
