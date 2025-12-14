#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3738973538U;
long long int var_4 = -240938806416974112LL;
long long int var_10 = 8927467059728097482LL;
short var_13 = (short)-27727;
unsigned int var_15 = 3127433177U;
int zero = 0;
short var_20 = (short)-16889;
unsigned int var_21 = 3250595738U;
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
