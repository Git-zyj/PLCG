#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)89;
signed char var_10 = (signed char)24;
unsigned char var_11 = (unsigned char)175;
short var_12 = (short)32649;
long long int var_17 = 5120249672691606040LL;
int zero = 0;
signed char var_19 = (signed char)113;
short var_20 = (short)636;
int var_21 = 1010601236;
void init() {
}

void checksum() {
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
