#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2385504318U;
unsigned char var_13 = (unsigned char)127;
long long int var_18 = -5969567166854417817LL;
int zero = 0;
unsigned char var_20 = (unsigned char)177;
short var_21 = (short)-20565;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
