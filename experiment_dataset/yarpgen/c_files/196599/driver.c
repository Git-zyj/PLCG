#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -181665378;
long long int var_2 = -199731293974273281LL;
int var_9 = -1692819273;
unsigned short var_10 = (unsigned short)10791;
int zero = 0;
unsigned char var_12 = (unsigned char)14;
short var_13 = (short)6662;
int var_14 = -2124449266;
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
