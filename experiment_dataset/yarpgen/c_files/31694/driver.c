#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1217071728;
short var_2 = (short)18488;
int var_3 = -644733238;
int var_6 = -896223013;
unsigned short var_7 = (unsigned short)30096;
unsigned short var_8 = (unsigned short)65514;
unsigned int var_9 = 405380902U;
unsigned long long int var_11 = 7850497279660758595ULL;
long long int var_12 = 7209044625528197622LL;
unsigned char var_15 = (unsigned char)50;
unsigned char var_16 = (unsigned char)68;
int zero = 0;
int var_17 = 1565226198;
int var_18 = 1023327767;
unsigned char var_19 = (unsigned char)166;
_Bool var_20 = (_Bool)0;
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
