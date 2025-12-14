#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 44968358;
long long int var_3 = -1609151085852131091LL;
unsigned char var_5 = (unsigned char)145;
short var_8 = (short)-26885;
short var_13 = (short)-8142;
int zero = 0;
long long int var_15 = -5059139277689015001LL;
long long int var_16 = 7892384808915199245LL;
short var_17 = (short)7063;
short var_18 = (short)32176;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
