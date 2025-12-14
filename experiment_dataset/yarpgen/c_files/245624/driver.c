#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)16;
unsigned short var_8 = (unsigned short)64869;
unsigned char var_13 = (unsigned char)108;
int zero = 0;
unsigned char var_19 = (unsigned char)14;
short var_20 = (short)-18611;
unsigned short var_21 = (unsigned short)26155;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
