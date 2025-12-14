#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31996;
int var_3 = 354384631;
short var_6 = (short)-28465;
unsigned long long int var_7 = 16678970200274555312ULL;
unsigned char var_8 = (unsigned char)239;
int zero = 0;
long long int var_11 = 922521848007929652LL;
unsigned char var_12 = (unsigned char)63;
_Bool var_13 = (_Bool)1;
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
