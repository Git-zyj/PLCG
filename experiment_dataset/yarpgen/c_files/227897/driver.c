#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)36;
unsigned char var_3 = (unsigned char)89;
unsigned int var_7 = 4093346168U;
int var_14 = -1725199034;
int zero = 0;
unsigned int var_17 = 2219417084U;
unsigned int var_18 = 6795171U;
unsigned short var_19 = (unsigned short)52851;
unsigned short var_20 = (unsigned short)40309;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
