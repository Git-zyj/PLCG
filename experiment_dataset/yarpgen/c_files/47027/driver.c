#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
int var_2 = 1867511365;
int var_3 = -1577632791;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-46;
_Bool var_7 = (_Bool)0;
int var_10 = 496244812;
long long int var_11 = -6863833749104617545LL;
unsigned char var_13 = (unsigned char)214;
signed char var_14 = (signed char)-125;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)113;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)88;
signed char var_19 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
