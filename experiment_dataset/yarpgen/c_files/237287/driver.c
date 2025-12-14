#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4333629541746837123ULL;
unsigned long long int var_2 = 7789317319901744359ULL;
unsigned long long int var_4 = 12764344789650462381ULL;
signed char var_5 = (signed char)-19;
unsigned char var_6 = (unsigned char)153;
unsigned short var_7 = (unsigned short)17885;
unsigned char var_8 = (unsigned char)168;
unsigned short var_10 = (unsigned short)18482;
int zero = 0;
unsigned int var_11 = 2596737415U;
unsigned char var_12 = (unsigned char)150;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)59206;
unsigned char var_15 = (unsigned char)56;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
