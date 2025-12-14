#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 760120430U;
unsigned short var_3 = (unsigned short)20262;
short var_4 = (short)31217;
int var_7 = -1929697876;
long long int var_8 = -1921173617047981677LL;
int var_9 = -1888013696;
unsigned short var_10 = (unsigned short)20037;
unsigned short var_12 = (unsigned short)14065;
unsigned int var_14 = 616888902U;
int zero = 0;
unsigned short var_15 = (unsigned short)27788;
unsigned int var_16 = 4165747624U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
