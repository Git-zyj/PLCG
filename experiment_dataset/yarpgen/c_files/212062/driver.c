#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13617662861688432672ULL;
unsigned int var_1 = 1675260568U;
signed char var_2 = (signed char)-127;
unsigned short var_3 = (unsigned short)31895;
unsigned int var_4 = 1518098887U;
unsigned short var_5 = (unsigned short)20861;
signed char var_6 = (signed char)-90;
unsigned long long int var_7 = 1646019598846670574ULL;
unsigned short var_8 = (unsigned short)27347;
unsigned long long int var_9 = 17181948670235120961ULL;
unsigned short var_11 = (unsigned short)8585;
long long int var_12 = 740718450758912109LL;
long long int var_13 = -4087208966673077192LL;
int zero = 0;
long long int var_14 = -2828921675036312443LL;
unsigned char var_15 = (unsigned char)90;
unsigned char var_16 = (unsigned char)235;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1800296770U;
unsigned int var_19 = 2370790240U;
unsigned int var_20 = 434731120U;
long long int var_21 = 7330362333522272907LL;
unsigned short var_22 = (unsigned short)56247;
unsigned int arr_8 [18] ;
long long int arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 4110696017U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = -1506772694581553753LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
