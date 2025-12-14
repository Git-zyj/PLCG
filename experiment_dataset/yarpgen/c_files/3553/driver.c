#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)33696;
unsigned int var_9 = 493435329U;
short var_13 = (short)8354;
int zero = 0;
unsigned short var_16 = (unsigned short)43049;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)194;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
