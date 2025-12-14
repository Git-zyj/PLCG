#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8747309659926276507ULL;
unsigned short var_1 = (unsigned short)57882;
int var_6 = -558025405;
int var_8 = 590142255;
unsigned char var_9 = (unsigned char)205;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-25900;
unsigned char var_13 = (unsigned char)45;
unsigned short var_14 = (unsigned short)39692;
unsigned char var_16 = (unsigned char)4;
unsigned short var_17 = (unsigned short)48275;
int zero = 0;
int var_18 = 1925818473;
short var_19 = (short)25769;
unsigned char var_20 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
