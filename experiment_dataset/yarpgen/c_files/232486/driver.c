#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-988;
short var_3 = (short)8033;
unsigned char var_4 = (unsigned char)133;
unsigned long long int var_6 = 5298496454105134338ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)254;
unsigned char var_12 = (unsigned char)210;
unsigned short var_13 = (unsigned short)40792;
unsigned char var_14 = (unsigned char)104;
short var_15 = (short)-1283;
int zero = 0;
long long int var_20 = 1352219858924971906LL;
unsigned char var_21 = (unsigned char)2;
unsigned short var_22 = (unsigned short)13717;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
