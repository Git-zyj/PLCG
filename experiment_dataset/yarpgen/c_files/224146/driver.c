#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24086;
unsigned long long int var_3 = 3940443037727948908ULL;
unsigned long long int var_4 = 18266045220550962207ULL;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)30;
unsigned char var_7 = (unsigned char)148;
unsigned char var_8 = (unsigned char)229;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-29482;
int zero = 0;
unsigned short var_11 = (unsigned short)61929;
unsigned short var_12 = (unsigned short)47650;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 972078212096672731ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
