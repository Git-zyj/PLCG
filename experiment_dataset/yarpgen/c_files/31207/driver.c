#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1681883570554397578LL;
short var_3 = (short)-32370;
unsigned char var_6 = (unsigned char)12;
int var_10 = 1341713720;
long long int var_11 = 1336526414308132340LL;
int var_12 = -1649311909;
int zero = 0;
unsigned short var_20 = (unsigned short)44205;
short var_21 = (short)18357;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)180;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
