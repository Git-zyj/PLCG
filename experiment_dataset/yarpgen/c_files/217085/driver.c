#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11578;
int var_3 = 1284164802;
int var_7 = -872619856;
long long int var_8 = -4677208377939159491LL;
unsigned char var_9 = (unsigned char)213;
_Bool var_12 = (_Bool)0;
int var_13 = -867247045;
int zero = 0;
unsigned char var_14 = (unsigned char)104;
short var_15 = (short)7522;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
