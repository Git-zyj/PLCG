#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-81;
unsigned short var_4 = (unsigned short)16184;
unsigned short var_8 = (unsigned short)16573;
long long int var_9 = 4897214474051637126LL;
int var_10 = 554677526;
signed char var_11 = (signed char)74;
signed char var_16 = (signed char)85;
short var_17 = (short)-6561;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-28;
long long int var_21 = -3307429505206384488LL;
void init() {
}

void checksum() {
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
