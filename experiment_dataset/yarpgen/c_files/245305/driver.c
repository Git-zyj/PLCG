#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16229720415984191907ULL;
long long int var_3 = -7510680308949011793LL;
unsigned long long int var_4 = 5905317280553979231ULL;
unsigned long long int var_7 = 6172670294222724213ULL;
short var_8 = (short)-18031;
unsigned int var_9 = 2116311088U;
int var_10 = -591315714;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 5697129696323264669ULL;
int zero = 0;
short var_14 = (short)20397;
signed char var_15 = (signed char)-103;
short var_16 = (short)30566;
unsigned char var_17 = (unsigned char)73;
unsigned int var_18 = 461922179U;
int var_19 = 1997401782;
long long int var_20 = 6712918740358633146LL;
unsigned int var_21 = 3229447426U;
long long int var_22 = 5062350137231578929LL;
unsigned char var_23 = (unsigned char)172;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
unsigned char arr_4 [18] [18] ;
unsigned char arr_5 [18] [18] ;
short arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)30928;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)5380;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
