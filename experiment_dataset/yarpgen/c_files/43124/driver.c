#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)24384;
unsigned int var_2 = 3137607849U;
unsigned char var_3 = (unsigned char)176;
short var_5 = (short)31716;
unsigned char var_6 = (unsigned char)38;
long long int var_7 = -6759580413024324116LL;
short var_8 = (short)-17306;
unsigned char var_12 = (unsigned char)101;
signed char var_15 = (signed char)-33;
short var_17 = (short)-27449;
unsigned int var_18 = 730065120U;
short var_19 = (short)-13905;
int zero = 0;
signed char var_20 = (signed char)63;
unsigned long long int var_21 = 2614273188383110679ULL;
short var_22 = (short)23299;
unsigned long long int var_23 = 5615847088848213171ULL;
short var_24 = (short)-9311;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
