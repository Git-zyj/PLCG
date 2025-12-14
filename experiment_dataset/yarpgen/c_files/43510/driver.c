#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3252070259704429152ULL;
unsigned char var_1 = (unsigned char)195;
unsigned short var_2 = (unsigned short)9600;
short var_4 = (short)-18034;
long long int var_6 = -1998440238516684782LL;
unsigned long long int var_7 = 5761767412471186943ULL;
unsigned long long int var_9 = 9200139422419999031ULL;
unsigned char var_10 = (unsigned char)128;
unsigned long long int var_11 = 16989554994640891319ULL;
int var_13 = 780011177;
unsigned char var_16 = (unsigned char)0;
int zero = 0;
long long int var_17 = 7209509509167922093LL;
long long int var_18 = 6174795028795460695LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3933272197U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
