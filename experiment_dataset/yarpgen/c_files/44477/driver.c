#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3424178647U;
unsigned char var_3 = (unsigned char)153;
signed char var_6 = (signed char)-16;
unsigned int var_9 = 822744173U;
unsigned short var_11 = (unsigned short)35038;
signed char var_13 = (signed char)95;
int zero = 0;
unsigned short var_17 = (unsigned short)61673;
unsigned char var_18 = (unsigned char)233;
short var_19 = (short)6225;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
