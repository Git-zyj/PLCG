#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-15;
unsigned int var_6 = 229260264U;
unsigned char var_7 = (unsigned char)194;
unsigned short var_9 = (unsigned short)20757;
unsigned short var_13 = (unsigned short)63227;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)57;
int zero = 0;
unsigned char var_18 = (unsigned char)136;
unsigned char var_19 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
