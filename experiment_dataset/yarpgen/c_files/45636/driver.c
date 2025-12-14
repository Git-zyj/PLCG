#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1191108946480841282ULL;
unsigned char var_2 = (unsigned char)204;
unsigned int var_5 = 3020866467U;
unsigned short var_7 = (unsigned short)26611;
unsigned short var_9 = (unsigned short)38524;
short var_10 = (short)8720;
int zero = 0;
long long int var_11 = -3620463467004410268LL;
unsigned int var_12 = 1853418432U;
unsigned char var_13 = (unsigned char)255;
void init() {
}

void checksum() {
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
