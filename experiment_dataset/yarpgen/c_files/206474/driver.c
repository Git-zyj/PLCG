#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
unsigned long long int var_4 = 7243562513195125404ULL;
unsigned int var_5 = 4118554550U;
int var_6 = -1485127629;
_Bool var_10 = (_Bool)1;
int var_11 = -966068171;
int var_12 = -1895883411;
int var_13 = -623585915;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)21432;
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
