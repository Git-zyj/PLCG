#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9097963502223321451ULL;
unsigned int var_5 = 112305929U;
unsigned long long int var_7 = 4978023834241380678ULL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)3094;
_Bool var_11 = (_Bool)0;
short var_12 = (short)-6424;
unsigned char var_13 = (unsigned char)93;
unsigned short var_14 = (unsigned short)57300;
unsigned char var_15 = (unsigned char)240;
unsigned char var_16 = (unsigned char)128;
short var_19 = (short)-21994;
int zero = 0;
unsigned short var_20 = (unsigned short)17816;
unsigned long long int var_21 = 6614916654846787177ULL;
unsigned long long int var_22 = 17495123480597894463ULL;
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
