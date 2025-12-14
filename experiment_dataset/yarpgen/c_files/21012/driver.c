#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22656;
short var_1 = (short)-2482;
signed char var_3 = (signed char)72;
unsigned long long int var_5 = 2510971751586191447ULL;
unsigned short var_6 = (unsigned short)13081;
signed char var_7 = (signed char)-89;
short var_8 = (short)-32427;
_Bool var_9 = (_Bool)1;
int var_13 = -1059761038;
int zero = 0;
int var_14 = -2097562468;
unsigned char var_15 = (unsigned char)121;
unsigned char var_16 = (unsigned char)57;
unsigned short var_17 = (unsigned short)3361;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
