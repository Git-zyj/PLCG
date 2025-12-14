#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1836350807;
unsigned short var_1 = (unsigned short)9479;
int var_2 = -1127142614;
unsigned int var_3 = 3696016196U;
unsigned char var_7 = (unsigned char)39;
unsigned int var_10 = 1161916894U;
_Bool var_14 = (_Bool)0;
signed char var_16 = (signed char)37;
int zero = 0;
int var_18 = -762937452;
unsigned int var_19 = 4199605146U;
unsigned short var_20 = (unsigned short)50505;
unsigned short var_21 = (unsigned short)62190;
unsigned int var_22 = 1809471071U;
unsigned char var_23 = (unsigned char)105;
short arr_0 [21] ;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)26051;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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
