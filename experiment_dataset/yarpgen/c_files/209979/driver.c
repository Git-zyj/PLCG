#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
unsigned short var_2 = (unsigned short)15781;
short var_3 = (short)-26631;
unsigned char var_5 = (unsigned char)39;
int var_6 = 1201435148;
unsigned long long int var_8 = 8023954258398844672ULL;
unsigned int var_12 = 3159380656U;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 9204666580590806240LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
