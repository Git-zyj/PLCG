#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16720462496006338744ULL;
short var_1 = (short)-31124;
unsigned short var_2 = (unsigned short)56865;
short var_3 = (short)-31814;
unsigned long long int var_4 = 12743173765409715303ULL;
unsigned short var_5 = (unsigned short)32765;
unsigned char var_6 = (unsigned char)95;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11931558274640288654ULL;
unsigned char var_10 = (unsigned char)110;
long long int var_12 = 301918503991913333LL;
unsigned char var_13 = (unsigned char)129;
int zero = 0;
long long int var_14 = 5141461828223274125LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
