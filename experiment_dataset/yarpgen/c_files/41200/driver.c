#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3965564329928257963LL;
unsigned char var_1 = (unsigned char)5;
short var_3 = (short)32170;
int var_5 = -81210377;
_Bool var_8 = (_Bool)1;
long long int var_10 = 201150928266587145LL;
signed char var_11 = (signed char)-29;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4091613169U;
short var_17 = (short)508;
int zero = 0;
unsigned int var_18 = 997176715U;
signed char var_19 = (signed char)19;
short var_20 = (short)24785;
int var_21 = 1333323127;
int var_22 = -970631129;
long long int var_23 = 1609798888983603947LL;
int arr_1 [21] ;
unsigned long long int arr_3 [21] ;
unsigned short arr_4 [21] [21] ;
int arr_5 [21] [21] [21] ;
unsigned short arr_7 [21] [21] ;
long long int arr_8 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -80221849;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 11708038276327888417ULL : 15906989910552447723ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)7991;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 949851745;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)64091;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 7621256683290825023LL : 3996410597373635218LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
