#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10225;
long long int var_12 = 5009886917977613227LL;
unsigned long long int var_13 = 1137411510106073358ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-29;
signed char var_19 = (signed char)-60;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)10;
int var_22 = -369199616;
int var_23 = 1854607100;
signed char var_24 = (signed char)-62;
unsigned long long int var_25 = 1432703753475645099ULL;
unsigned long long int var_26 = 973418568779444095ULL;
short var_27 = (short)-18918;
unsigned int var_28 = 3153854218U;
unsigned long long int var_29 = 8399812770410506554ULL;
unsigned long long int arr_19 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = 4451072847069530939ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
