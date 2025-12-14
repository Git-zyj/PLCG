#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)33787;
signed char var_3 = (signed char)-80;
short var_4 = (short)-21347;
unsigned short var_5 = (unsigned short)22249;
signed char var_6 = (signed char)123;
int var_7 = 1732492056;
unsigned long long int var_8 = 3459849771647490960ULL;
unsigned char var_10 = (unsigned char)38;
signed char var_11 = (signed char)-22;
unsigned short var_12 = (unsigned short)63631;
signed char var_13 = (signed char)49;
short var_14 = (short)20468;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3358323680U;
short var_18 = (short)32310;
int zero = 0;
unsigned long long int var_19 = 16879336337092253804ULL;
unsigned short var_20 = (unsigned short)15919;
unsigned char var_21 = (unsigned char)62;
unsigned short var_22 = (unsigned short)12824;
unsigned int var_23 = 2721437015U;
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
