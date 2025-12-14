#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)3;
unsigned short var_1 = (unsigned short)34600;
signed char var_2 = (signed char)-72;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)-64;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 701125174U;
unsigned char var_8 = (unsigned char)113;
unsigned long long int var_9 = 1411136035584048884ULL;
unsigned char var_14 = (unsigned char)167;
unsigned short var_15 = (unsigned short)61814;
int zero = 0;
unsigned long long int var_16 = 13524470185833236670ULL;
int var_17 = -150831651;
unsigned long long int var_18 = 1732073415918706086ULL;
unsigned short var_19 = (unsigned short)27606;
unsigned long long int var_20 = 12355320663648759057ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
