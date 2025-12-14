#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)237;
signed char var_2 = (signed char)19;
unsigned short var_11 = (unsigned short)8967;
long long int var_12 = -8987252828002436961LL;
signed char var_14 = (signed char)-69;
int zero = 0;
long long int var_20 = 2137935376362089645LL;
unsigned char var_21 = (unsigned char)229;
void init() {
}

void checksum() {
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
