#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56906;
long long int var_1 = -5599989705359556372LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 2236079708U;
unsigned char var_5 = (unsigned char)246;
unsigned int var_6 = 395920145U;
short var_7 = (short)-29332;
unsigned short var_9 = (unsigned short)53128;
unsigned char var_11 = (unsigned char)122;
unsigned long long int var_14 = 3136111696101807336ULL;
int zero = 0;
long long int var_15 = 4603684388422443649LL;
signed char var_16 = (signed char)60;
unsigned char var_17 = (unsigned char)19;
unsigned short var_18 = (unsigned short)1553;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
