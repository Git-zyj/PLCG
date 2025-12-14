#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14543771734788097633ULL;
int var_4 = -1530795266;
unsigned char var_6 = (unsigned char)64;
signed char var_7 = (signed char)-77;
unsigned short var_8 = (unsigned short)27890;
int zero = 0;
int var_12 = 1118541922;
int var_13 = -2087421400;
unsigned char var_14 = (unsigned char)242;
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
