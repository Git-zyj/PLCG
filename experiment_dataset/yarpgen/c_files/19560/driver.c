#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1608999889U;
signed char var_3 = (signed char)-86;
unsigned short var_5 = (unsigned short)44676;
unsigned int var_6 = 3006935136U;
short var_8 = (short)10345;
long long int var_10 = 5406473501456188211LL;
unsigned char var_14 = (unsigned char)228;
int zero = 0;
int var_15 = 502091214;
unsigned int var_16 = 274970587U;
long long int var_17 = -1077086113667813399LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
