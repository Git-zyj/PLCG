#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47916;
int var_2 = -1314372070;
signed char var_9 = (signed char)87;
int var_11 = 1155679287;
unsigned char var_12 = (unsigned char)194;
signed char var_18 = (signed char)21;
int zero = 0;
unsigned short var_19 = (unsigned short)3918;
long long int var_20 = 2677769216065887516LL;
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
