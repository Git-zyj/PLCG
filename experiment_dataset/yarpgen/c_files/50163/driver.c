#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7833;
unsigned long long int var_1 = 14794678698688048004ULL;
unsigned short var_2 = (unsigned short)54384;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 15172431688064931391ULL;
unsigned long long int var_11 = 6160034656518978850ULL;
unsigned char var_12 = (unsigned char)115;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 2240413834U;
short var_19 = (short)-24581;
long long int var_20 = 8924624874716696277LL;
void init() {
}

void checksum() {
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
