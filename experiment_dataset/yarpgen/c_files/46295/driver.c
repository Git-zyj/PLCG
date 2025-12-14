#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)8953;
unsigned short var_7 = (unsigned short)4477;
short var_8 = (short)26027;
short var_9 = (short)32344;
unsigned char var_10 = (unsigned char)179;
int var_11 = 1515899484;
unsigned short var_14 = (unsigned short)33755;
int var_16 = -286220960;
long long int var_17 = -1335438589800310260LL;
int zero = 0;
unsigned short var_18 = (unsigned short)2212;
unsigned long long int var_19 = 14420199461057831852ULL;
int var_20 = -1007420523;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
