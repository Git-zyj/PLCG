#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)224;
short var_2 = (short)-8608;
unsigned short var_3 = (unsigned short)62088;
unsigned char var_4 = (unsigned char)3;
unsigned char var_5 = (unsigned char)141;
unsigned int var_6 = 3268421133U;
signed char var_9 = (signed char)-32;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 1363039151U;
int zero = 0;
signed char var_14 = (signed char)-52;
short var_15 = (short)5219;
unsigned int var_16 = 452591463U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
