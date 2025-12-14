#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1623999992397957857ULL;
unsigned int var_5 = 3316889204U;
signed char var_7 = (signed char)-34;
unsigned char var_8 = (unsigned char)48;
signed char var_14 = (signed char)65;
int zero = 0;
short var_17 = (short)-5203;
unsigned long long int var_18 = 17099900516955743818ULL;
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
