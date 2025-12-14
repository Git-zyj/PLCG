#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-107;
long long int var_1 = -3386444622417925582LL;
long long int var_3 = -4952091062101301238LL;
unsigned char var_4 = (unsigned char)235;
short var_7 = (short)-15480;
unsigned int var_8 = 4118810770U;
unsigned long long int var_9 = 14712200185599972413ULL;
signed char var_10 = (signed char)-106;
short var_11 = (short)-17024;
unsigned char var_12 = (unsigned char)37;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
signed char var_14 = (signed char)61;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
