#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 892936212;
int var_5 = 1540649855;
unsigned int var_7 = 793889931U;
unsigned char var_12 = (unsigned char)59;
unsigned long long int var_13 = 10358354533874424067ULL;
unsigned long long int var_15 = 66496005000458762ULL;
long long int var_17 = -969816041739205494LL;
int zero = 0;
short var_18 = (short)21204;
int var_19 = 1796785801;
unsigned int var_20 = 2089611440U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
