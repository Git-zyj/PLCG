#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)28152;
unsigned char var_4 = (unsigned char)16;
signed char var_6 = (signed char)45;
signed char var_8 = (signed char)37;
unsigned short var_9 = (unsigned short)52863;
int var_10 = -968805410;
unsigned char var_12 = (unsigned char)14;
unsigned char var_14 = (unsigned char)82;
unsigned char var_16 = (unsigned char)158;
int zero = 0;
signed char var_17 = (signed char)-58;
unsigned char var_18 = (unsigned char)153;
unsigned int var_19 = 3952007587U;
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
