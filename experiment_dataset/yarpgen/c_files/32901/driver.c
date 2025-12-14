#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
short var_1 = (short)-28941;
int var_2 = -182270484;
unsigned char var_3 = (unsigned char)68;
unsigned short var_4 = (unsigned short)17010;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)31651;
unsigned char var_7 = (unsigned char)91;
unsigned int var_8 = 2607069027U;
signed char var_9 = (signed char)13;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)115;
int zero = 0;
unsigned short var_12 = (unsigned short)46912;
unsigned short var_13 = (unsigned short)35549;
signed char var_14 = (signed char)-101;
signed char var_15 = (signed char)89;
unsigned int var_16 = 1410023634U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
