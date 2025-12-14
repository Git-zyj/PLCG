#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-8615;
unsigned int var_2 = 1217010540U;
signed char var_5 = (signed char)-90;
unsigned char var_6 = (unsigned char)180;
unsigned char var_8 = (unsigned char)76;
unsigned char var_9 = (unsigned char)59;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 14009867772007598484ULL;
signed char var_15 = (signed char)10;
unsigned char var_17 = (unsigned char)26;
int zero = 0;
unsigned short var_18 = (unsigned short)41197;
int var_19 = -1495529595;
signed char var_20 = (signed char)-60;
unsigned int var_21 = 3205033053U;
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
