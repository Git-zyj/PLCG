#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16143153179178741994ULL;
unsigned int var_4 = 1129622844U;
unsigned long long int var_9 = 18383694290680392781ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)38422;
unsigned char var_13 = (unsigned char)206;
void init() {
}

void checksum() {
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
