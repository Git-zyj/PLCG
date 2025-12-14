#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)105;
unsigned long long int var_4 = 9071081959156104025ULL;
unsigned long long int var_5 = 6276959575864878662ULL;
long long int var_6 = 7572328614739817087LL;
int var_8 = 1427766854;
int var_13 = -1151067981;
signed char var_14 = (signed char)116;
unsigned int var_15 = 230093961U;
unsigned long long int var_16 = 7359073245459846097ULL;
int zero = 0;
int var_19 = -42768243;
unsigned short var_20 = (unsigned short)36351;
short var_21 = (short)-6836;
short var_22 = (short)-12978;
unsigned long long int var_23 = 355832318075630285ULL;
unsigned short var_24 = (unsigned short)28783;
unsigned long long int var_25 = 16170649349208760434ULL;
unsigned short var_26 = (unsigned short)39468;
_Bool var_27 = (_Bool)1;
int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
signed char arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 2055284914;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)111;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
