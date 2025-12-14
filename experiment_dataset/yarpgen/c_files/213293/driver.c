#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1780;
unsigned int var_2 = 3702686164U;
unsigned short var_3 = (unsigned short)14510;
int var_4 = -901233151;
signed char var_5 = (signed char)-105;
unsigned char var_6 = (unsigned char)138;
signed char var_7 = (signed char)-96;
int var_8 = -1380296082;
unsigned char var_9 = (unsigned char)206;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 2188092881U;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)243;
unsigned short var_16 = (unsigned short)11245;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1640929113;
int var_19 = 622888623;
unsigned int var_20 = 4064112177U;
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
