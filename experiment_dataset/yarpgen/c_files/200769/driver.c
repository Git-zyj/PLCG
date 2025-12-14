#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1807985469;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)225;
long long int var_4 = -3966696753406639841LL;
int var_5 = 202550004;
unsigned int var_7 = 769159256U;
short var_9 = (short)-27009;
unsigned long long int var_10 = 5902304159896051814ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)139;
short var_13 = (short)30348;
long long int var_14 = 7010897632124512490LL;
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
