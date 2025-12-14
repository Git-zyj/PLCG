#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -9151481796182591487LL;
unsigned int var_9 = 792457285U;
int zero = 0;
unsigned short var_11 = (unsigned short)3237;
unsigned char var_12 = (unsigned char)102;
unsigned short var_13 = (unsigned short)11352;
unsigned char var_14 = (unsigned char)245;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
