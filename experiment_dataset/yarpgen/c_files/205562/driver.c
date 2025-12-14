#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -659090802523804316LL;
unsigned char var_2 = (unsigned char)223;
unsigned char var_7 = (unsigned char)10;
int zero = 0;
unsigned int var_11 = 236340819U;
short var_12 = (short)16703;
int var_13 = -1043880464;
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
