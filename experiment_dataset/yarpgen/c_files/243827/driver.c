#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
short var_1 = (short)-8639;
unsigned int var_2 = 3423089464U;
unsigned short var_4 = (unsigned short)42935;
signed char var_6 = (signed char)110;
unsigned long long int var_7 = 1342455639515836427ULL;
unsigned short var_9 = (unsigned short)6622;
int zero = 0;
short var_12 = (short)24146;
unsigned short var_13 = (unsigned short)54519;
int var_14 = -1815896464;
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
