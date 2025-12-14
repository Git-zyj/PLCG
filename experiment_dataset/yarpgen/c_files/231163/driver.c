#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4354352257720760077LL;
unsigned long long int var_4 = 14939004767642869886ULL;
unsigned int var_6 = 718761240U;
unsigned short var_7 = (unsigned short)49910;
unsigned int var_9 = 201908203U;
unsigned int var_10 = 3808833992U;
int zero = 0;
short var_11 = (short)17489;
unsigned int var_12 = 2169233296U;
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
