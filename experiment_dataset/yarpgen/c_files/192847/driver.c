#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3957414876010501348LL;
int var_4 = 949714185;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)113;
int zero = 0;
unsigned char var_12 = (unsigned char)100;
long long int var_13 = -6322765807601184397LL;
short var_14 = (short)-12213;
void init() {
}

void checksum() {
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
