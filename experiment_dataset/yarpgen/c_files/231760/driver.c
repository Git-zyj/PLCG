#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 214347663U;
unsigned short var_9 = (unsigned short)10373;
short var_12 = (short)-23499;
long long int var_14 = -4104309290398349989LL;
signed char var_15 = (signed char)-89;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)-11651;
signed char var_19 = (signed char)-68;
unsigned long long int var_20 = 14026249221674175219ULL;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)170;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 4184402376U;
short var_25 = (short)-10893;
_Bool var_26 = (_Bool)1;
unsigned short arr_0 [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned long long int arr_4 [24] ;
unsigned long long int arr_6 [24] [24] ;
unsigned long long int arr_11 [16] ;
unsigned long long int arr_12 [16] ;
long long int arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58797 : (unsigned short)31607;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 10404831806535528455ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 17744067594069507285ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = 11299475829347739523ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 13075789649403448932ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 3197575991513728629ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = -780891149055578840LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
