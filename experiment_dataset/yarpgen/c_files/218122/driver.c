#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51601;
long long int var_3 = 7721492279158452802LL;
short var_4 = (short)32086;
_Bool var_5 = (_Bool)1;
int var_7 = -1852349966;
unsigned short var_8 = (unsigned short)31121;
int zero = 0;
unsigned short var_10 = (unsigned short)33154;
unsigned long long int var_11 = 15862681965525335649ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
