#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)28886;
signed char var_3 = (signed char)-99;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-5598;
signed char var_8 = (signed char)70;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-118;
short var_14 = (short)-21756;
unsigned short var_16 = (unsigned short)27577;
unsigned short var_17 = (unsigned short)50112;
int zero = 0;
short var_18 = (short)-28630;
int var_19 = 304020625;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)5776;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
