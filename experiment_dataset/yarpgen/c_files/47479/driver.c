#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2127840464;
long long int var_1 = 6627279259782279950LL;
int var_2 = -426590183;
int var_5 = 961616252;
signed char var_6 = (signed char)-109;
unsigned char var_7 = (unsigned char)44;
signed char var_10 = (signed char)-96;
int zero = 0;
short var_11 = (short)-30370;
signed char var_12 = (signed char)-105;
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
