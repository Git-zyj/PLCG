#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)81;
unsigned short var_3 = (unsigned short)59202;
unsigned short var_4 = (unsigned short)3734;
short var_10 = (short)910;
unsigned int var_11 = 2679419841U;
unsigned int var_13 = 3032219240U;
unsigned short var_15 = (unsigned short)26123;
int zero = 0;
short var_17 = (short)1426;
unsigned short var_18 = (unsigned short)62102;
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
