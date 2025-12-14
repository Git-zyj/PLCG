#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27164;
unsigned short var_7 = (unsigned short)37556;
int var_8 = 1910868423;
int zero = 0;
unsigned char var_18 = (unsigned char)136;
short var_19 = (short)-738;
long long int var_20 = -8447970742078627229LL;
unsigned short var_21 = (unsigned short)62946;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
