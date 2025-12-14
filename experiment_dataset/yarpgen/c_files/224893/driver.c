#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)124;
short var_2 = (short)-18140;
signed char var_3 = (signed char)-35;
unsigned short var_5 = (unsigned short)25285;
unsigned int var_6 = 1122950382U;
int var_7 = -1220722045;
signed char var_9 = (signed char)-35;
int zero = 0;
unsigned long long int var_11 = 17404091513624032204ULL;
signed char var_12 = (signed char)119;
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
