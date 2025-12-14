#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)31054;
unsigned char var_4 = (unsigned char)255;
short var_5 = (short)31669;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)13657;
unsigned char var_10 = (unsigned char)201;
int var_11 = 1543715424;
long long int var_12 = -5185954271434365903LL;
int zero = 0;
unsigned char var_13 = (unsigned char)47;
unsigned short var_14 = (unsigned short)11759;
unsigned long long int var_15 = 17442486407877523113ULL;
int var_16 = -708466386;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
