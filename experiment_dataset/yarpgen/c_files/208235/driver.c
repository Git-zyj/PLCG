#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29672;
short var_5 = (short)20827;
_Bool var_10 = (_Bool)1;
unsigned short var_16 = (unsigned short)60528;
unsigned short var_17 = (unsigned short)16147;
int zero = 0;
short var_19 = (short)10557;
short var_20 = (short)-981;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
