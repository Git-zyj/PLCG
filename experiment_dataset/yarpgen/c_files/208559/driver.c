#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1624152431;
unsigned char var_6 = (unsigned char)121;
unsigned short var_13 = (unsigned short)15250;
int zero = 0;
unsigned short var_19 = (unsigned short)50930;
signed char var_20 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
