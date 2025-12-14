#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)83;
int var_2 = -263583223;
unsigned char var_4 = (unsigned char)54;
unsigned char var_5 = (unsigned char)233;
signed char var_6 = (signed char)-115;
unsigned short var_7 = (unsigned short)65522;
unsigned int var_8 = 2184072098U;
short var_11 = (short)7177;
unsigned char var_12 = (unsigned char)251;
int zero = 0;
unsigned int var_13 = 4281054357U;
signed char var_14 = (signed char)52;
void init() {
}

void checksum() {
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
