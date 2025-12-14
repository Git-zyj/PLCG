#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3855873622383888115LL;
long long int var_1 = 701705839871463892LL;
unsigned char var_2 = (unsigned char)73;
int zero = 0;
short var_10 = (short)30597;
int var_11 = -386206608;
unsigned short var_12 = (unsigned short)19074;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
