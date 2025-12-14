#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14502;
short var_2 = (short)-6214;
unsigned short var_3 = (unsigned short)60589;
unsigned short var_5 = (unsigned short)2273;
short var_11 = (short)-27764;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-28526;
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
