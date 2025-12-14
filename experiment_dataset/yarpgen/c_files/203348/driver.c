#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)76;
unsigned int var_8 = 3670601155U;
unsigned char var_14 = (unsigned char)209;
int zero = 0;
unsigned char var_20 = (unsigned char)114;
unsigned short var_21 = (unsigned short)18983;
signed char var_22 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
