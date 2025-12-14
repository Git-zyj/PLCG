#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 412636888U;
short var_1 = (short)21302;
signed char var_2 = (signed char)65;
signed char var_3 = (signed char)-11;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-61;
unsigned long long int var_6 = 15388498729961250519ULL;
signed char var_7 = (signed char)20;
signed char var_8 = (signed char)-114;
unsigned int var_10 = 1050519909U;
unsigned char var_11 = (unsigned char)186;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 5123156945075190809ULL;
unsigned long long int var_14 = 7872397935597333301ULL;
unsigned char var_15 = (unsigned char)111;
signed char var_16 = (signed char)123;
signed char var_17 = (signed char)86;
int var_18 = -520992325;
int zero = 0;
short var_19 = (short)-7151;
unsigned char var_20 = (unsigned char)32;
short var_21 = (short)-3547;
unsigned char var_22 = (unsigned char)237;
unsigned char var_23 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
