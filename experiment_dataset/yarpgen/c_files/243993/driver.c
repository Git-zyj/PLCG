#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2114014805;
long long int var_2 = -4202518372327776978LL;
unsigned short var_5 = (unsigned short)43813;
unsigned char var_8 = (unsigned char)90;
unsigned char var_11 = (unsigned char)40;
long long int var_12 = -7455467036315750027LL;
unsigned char var_14 = (unsigned char)39;
int zero = 0;
unsigned short var_17 = (unsigned short)40184;
short var_18 = (short)15930;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
