#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10686;
long long int var_1 = -5368850202698412032LL;
int var_6 = -712074550;
unsigned int var_8 = 1965189741U;
unsigned short var_9 = (unsigned short)50738;
int zero = 0;
signed char var_12 = (signed char)79;
unsigned char var_13 = (unsigned char)142;
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
