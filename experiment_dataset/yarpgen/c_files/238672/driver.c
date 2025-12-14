#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15046;
signed char var_1 = (signed char)58;
long long int var_3 = -7564822638729116282LL;
unsigned int var_4 = 3030059375U;
signed char var_5 = (signed char)119;
unsigned short var_9 = (unsigned short)31273;
int zero = 0;
short var_11 = (short)-6799;
unsigned int var_12 = 2220194829U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
