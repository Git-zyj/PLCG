#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1661;
long long int var_8 = -8738676035856579324LL;
int var_9 = 905758310;
int zero = 0;
unsigned int var_10 = 4110311905U;
unsigned int var_11 = 2146545551U;
int var_12 = -1535729931;
unsigned short var_13 = (unsigned short)1757;
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
