#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2718693668U;
signed char var_2 = (signed char)-20;
unsigned long long int var_5 = 6650899733079646548ULL;
short var_6 = (short)-5123;
signed char var_11 = (signed char)3;
unsigned long long int var_13 = 13176647437166746856ULL;
signed char var_17 = (signed char)-90;
short var_18 = (short)-15141;
int zero = 0;
unsigned short var_19 = (unsigned short)10909;
unsigned char var_20 = (unsigned char)226;
void init() {
}

void checksum() {
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
