#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 879157399U;
unsigned int var_10 = 3533199626U;
int var_11 = 1401059091;
unsigned int var_14 = 3350417384U;
unsigned int var_15 = 90873959U;
int zero = 0;
unsigned long long int var_17 = 10785307800520841199ULL;
unsigned int var_18 = 1260975371U;
int var_19 = 785626722;
short var_20 = (short)13929;
unsigned int var_21 = 2602569183U;
unsigned char var_22 = (unsigned char)51;
_Bool var_23 = (_Bool)1;
signed char arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)71;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
