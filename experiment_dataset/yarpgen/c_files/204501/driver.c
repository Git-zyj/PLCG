#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1868;
short var_3 = (short)-23306;
unsigned short var_4 = (unsigned short)38668;
short var_5 = (short)19231;
_Bool var_7 = (_Bool)1;
long long int var_8 = 9137758619704971026LL;
int var_9 = -1572797042;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)62187;
signed char var_12 = (signed char)-10;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-10;
signed char var_15 = (signed char)-94;
long long int var_16 = -4629383830508731993LL;
signed char var_17 = (signed char)51;
int zero = 0;
unsigned long long int var_18 = 14458246500170203520ULL;
unsigned char var_19 = (unsigned char)135;
unsigned short var_20 = (unsigned short)16193;
unsigned long long int var_21 = 4020269338208832285ULL;
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
