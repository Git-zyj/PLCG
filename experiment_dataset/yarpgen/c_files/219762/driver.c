#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12856811243687126244ULL;
int var_1 = 1765962407;
signed char var_2 = (signed char)47;
unsigned int var_3 = 223625260U;
int var_4 = 401272904;
short var_5 = (short)-24441;
unsigned long long int var_6 = 18207603392514468360ULL;
signed char var_7 = (signed char)115;
unsigned short var_8 = (unsigned short)7224;
short var_9 = (short)6295;
int var_10 = -435088624;
signed char var_11 = (signed char)-27;
int zero = 0;
unsigned int var_13 = 3188909361U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)20731;
signed char var_16 = (signed char)-8;
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
