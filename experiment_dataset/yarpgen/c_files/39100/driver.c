#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
long long int var_12 = -7620089724414867004LL;
unsigned char var_16 = (unsigned char)57;
int zero = 0;
short var_19 = (short)6356;
unsigned short var_20 = (unsigned short)30111;
short var_21 = (short)-13734;
short var_22 = (short)22853;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
