#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7558622504116029952LL;
long long int var_1 = -7539093905367387594LL;
signed char var_5 = (signed char)-86;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_10 = 4294253059U;
unsigned int var_11 = 226483909U;
int var_12 = 1041786955;
unsigned short var_13 = (unsigned short)51660;
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
