#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19424;
long long int var_1 = 646790729590626249LL;
short var_2 = (short)-10644;
short var_3 = (short)-3418;
int var_5 = -1264171627;
unsigned int var_6 = 803537764U;
long long int var_8 = -2550882700234541652LL;
unsigned int var_9 = 2562260007U;
int var_10 = 1285402823;
unsigned char var_11 = (unsigned char)41;
int zero = 0;
unsigned char var_13 = (unsigned char)8;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)45;
short var_16 = (short)5888;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
