#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)153;
unsigned char var_4 = (unsigned char)168;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)12;
int var_11 = -1447890202;
int zero = 0;
unsigned char var_12 = (unsigned char)36;
unsigned int var_13 = 1484546746U;
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
