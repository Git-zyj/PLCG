#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8685291691906822516LL;
long long int var_9 = -7945348671656097113LL;
unsigned short var_10 = (unsigned short)64297;
unsigned short var_12 = (unsigned short)24257;
int zero = 0;
long long int var_13 = -5168780912074773611LL;
unsigned short var_14 = (unsigned short)65360;
unsigned char var_15 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
