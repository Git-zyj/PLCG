#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)218;
unsigned int var_7 = 251496285U;
int var_9 = 1352680819;
_Bool var_10 = (_Bool)0;
long long int var_11 = 7980598093234546066LL;
int zero = 0;
short var_12 = (short)-23270;
unsigned char var_13 = (unsigned char)101;
unsigned int var_14 = 841160777U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
