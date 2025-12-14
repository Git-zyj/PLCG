#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6416866475908025589LL;
unsigned char var_4 = (unsigned char)161;
unsigned char var_7 = (unsigned char)222;
unsigned short var_8 = (unsigned short)48998;
int zero = 0;
long long int var_17 = 8128288134784970764LL;
short var_18 = (short)15970;
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
