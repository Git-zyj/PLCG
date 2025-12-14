#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -894204552;
int var_7 = 1200455875;
unsigned char var_11 = (unsigned char)222;
unsigned short var_13 = (unsigned short)613;
long long int var_16 = 2170840549494439488LL;
int zero = 0;
short var_20 = (short)19433;
unsigned int var_21 = 2495259348U;
signed char var_22 = (signed char)-94;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
