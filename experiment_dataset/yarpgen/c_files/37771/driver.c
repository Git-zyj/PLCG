#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1108474831943401655LL;
short var_1 = (short)2191;
signed char var_2 = (signed char)-87;
unsigned char var_3 = (unsigned char)17;
unsigned long long int var_5 = 2906619504434867014ULL;
short var_7 = (short)12402;
unsigned char var_8 = (unsigned char)205;
short var_9 = (short)-3225;
unsigned int var_11 = 69038702U;
int var_12 = 489128624;
unsigned char var_13 = (unsigned char)248;
unsigned int var_14 = 1527198752U;
int zero = 0;
short var_15 = (short)22404;
unsigned int var_16 = 3642306151U;
unsigned char var_17 = (unsigned char)208;
short var_18 = (short)-267;
int var_19 = 473568449;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
