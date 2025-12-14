#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
short var_3 = (short)-29758;
unsigned short var_10 = (unsigned short)38321;
short var_15 = (short)-5655;
int zero = 0;
unsigned long long int var_18 = 7836139726988624664ULL;
unsigned short var_19 = (unsigned short)44931;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
