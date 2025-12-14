#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55628;
short var_3 = (short)-1142;
signed char var_4 = (signed char)-85;
signed char var_5 = (signed char)-65;
long long int var_8 = -9100446699085151932LL;
short var_9 = (short)-32136;
signed char var_10 = (signed char)119;
signed char var_13 = (signed char)-97;
int zero = 0;
signed char var_15 = (signed char)63;
unsigned short var_16 = (unsigned short)64873;
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
