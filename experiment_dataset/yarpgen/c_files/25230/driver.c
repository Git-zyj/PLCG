#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)20;
unsigned short var_3 = (unsigned short)6517;
short var_4 = (short)12946;
long long int var_6 = -1012689994378036379LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16352848525314007963ULL;
int var_10 = 1027551992;
int zero = 0;
signed char var_11 = (signed char)5;
_Bool var_12 = (_Bool)0;
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
