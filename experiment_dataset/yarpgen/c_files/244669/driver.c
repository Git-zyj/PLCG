#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1223786672;
short var_4 = (short)-7787;
unsigned short var_8 = (unsigned short)42890;
long long int var_9 = -3992903429726836440LL;
short var_11 = (short)-7298;
unsigned short var_12 = (unsigned short)26032;
short var_13 = (short)2615;
int zero = 0;
int var_19 = -1917130425;
unsigned char var_20 = (unsigned char)151;
long long int var_21 = -1193029100968487685LL;
int var_22 = -664722080;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
