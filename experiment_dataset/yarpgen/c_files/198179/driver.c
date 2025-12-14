#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-65;
signed char var_9 = (signed char)84;
unsigned short var_11 = (unsigned short)15254;
unsigned char var_12 = (unsigned char)14;
unsigned char var_14 = (unsigned char)222;
int zero = 0;
unsigned short var_16 = (unsigned short)8975;
unsigned short var_17 = (unsigned short)26051;
unsigned short var_18 = (unsigned short)15578;
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
