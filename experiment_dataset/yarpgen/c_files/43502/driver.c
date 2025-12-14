#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)66;
unsigned short var_2 = (unsigned short)20153;
signed char var_7 = (signed char)23;
unsigned long long int var_10 = 982760211284841567ULL;
unsigned char var_11 = (unsigned char)128;
int zero = 0;
short var_12 = (short)-16778;
unsigned long long int var_13 = 15636002770126242376ULL;
long long int var_14 = 1267739811690596875LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
