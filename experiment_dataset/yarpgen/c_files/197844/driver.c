#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1961084581U;
unsigned int var_9 = 4203651116U;
unsigned int var_10 = 4242283055U;
unsigned int var_11 = 1115535719U;
unsigned int var_12 = 3005431650U;
unsigned char var_15 = (unsigned char)50;
int zero = 0;
unsigned short var_17 = (unsigned short)11700;
unsigned int var_18 = 2171757153U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
