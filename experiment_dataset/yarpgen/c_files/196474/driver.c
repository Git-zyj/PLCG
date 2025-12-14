#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)162;
unsigned short var_6 = (unsigned short)32090;
short var_7 = (short)-15947;
unsigned char var_9 = (unsigned char)119;
unsigned char var_10 = (unsigned char)93;
unsigned short var_11 = (unsigned short)21538;
int var_12 = -683545019;
int var_13 = -1561375549;
int zero = 0;
int var_17 = 1785602095;
unsigned char var_18 = (unsigned char)197;
_Bool var_19 = (_Bool)1;
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
