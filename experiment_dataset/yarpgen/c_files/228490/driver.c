#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13318663044862094221ULL;
unsigned char var_2 = (unsigned char)12;
signed char var_3 = (signed char)121;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 7415885104253341627ULL;
unsigned long long int var_7 = 12000819657330431990ULL;
long long int var_11 = 2803676674945882049LL;
short var_12 = (short)32168;
unsigned char var_14 = (unsigned char)10;
unsigned short var_16 = (unsigned short)55453;
unsigned int var_18 = 499536635U;
int zero = 0;
unsigned long long int var_20 = 9529258203737686236ULL;
unsigned int var_21 = 2972219639U;
unsigned long long int var_22 = 16653662768450988399ULL;
long long int var_23 = 2105675882996497712LL;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
