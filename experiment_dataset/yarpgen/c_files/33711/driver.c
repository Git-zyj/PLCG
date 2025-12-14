#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5106093071005854149ULL;
unsigned int var_1 = 1949734469U;
unsigned long long int var_4 = 9601615221245251212ULL;
unsigned char var_5 = (unsigned char)217;
short var_6 = (short)28390;
unsigned short var_7 = (unsigned short)62514;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)-14;
signed char var_14 = (signed char)-49;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-107;
short var_17 = (short)24820;
void init() {
}

void checksum() {
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
