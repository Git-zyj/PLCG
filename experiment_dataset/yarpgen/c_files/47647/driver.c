#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14938;
unsigned long long int var_3 = 12472746899124511301ULL;
unsigned char var_6 = (unsigned char)75;
unsigned char var_7 = (unsigned char)177;
short var_8 = (short)-10492;
int var_9 = -257369628;
int var_10 = 1333009035;
long long int var_12 = 1547816193921578876LL;
unsigned short var_13 = (unsigned short)1704;
int zero = 0;
int var_14 = 1347067582;
_Bool var_15 = (_Bool)0;
long long int var_16 = 7097638039093548969LL;
int var_17 = 1080562410;
unsigned int var_18 = 322526645U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
