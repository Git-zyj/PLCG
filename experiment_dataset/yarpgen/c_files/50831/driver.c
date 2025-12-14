#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14024083898283610301ULL;
signed char var_3 = (signed char)-46;
unsigned char var_4 = (unsigned char)62;
short var_5 = (short)-11603;
unsigned int var_6 = 194337806U;
long long int var_8 = 1093043004679817504LL;
short var_9 = (short)12691;
signed char var_10 = (signed char)-98;
unsigned char var_11 = (unsigned char)24;
short var_13 = (short)-16174;
unsigned int var_15 = 124893901U;
signed char var_16 = (signed char)126;
short var_17 = (short)28822;
int zero = 0;
unsigned short var_18 = (unsigned short)45183;
long long int var_19 = 396492764279687377LL;
signed char var_20 = (signed char)5;
unsigned long long int var_21 = 8557983327834582535ULL;
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
