#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30933;
signed char var_3 = (signed char)-75;
unsigned short var_7 = (unsigned short)525;
unsigned long long int var_12 = 12668333593422712974ULL;
unsigned int var_14 = 3126514500U;
long long int var_16 = -1188985544084052687LL;
int zero = 0;
unsigned char var_20 = (unsigned char)53;
unsigned long long int var_21 = 11769603922496417997ULL;
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
