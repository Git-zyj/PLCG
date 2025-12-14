#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
short var_1 = (short)18716;
_Bool var_2 = (_Bool)0;
long long int var_3 = -2209820748678746892LL;
unsigned char var_4 = (unsigned char)125;
unsigned long long int var_5 = 16901249175198736978ULL;
long long int var_6 = -8528295464872811489LL;
unsigned char var_7 = (unsigned char)139;
int var_8 = 737726667;
unsigned char var_9 = (unsigned char)185;
unsigned long long int var_10 = 7578071545438041394ULL;
unsigned char var_11 = (unsigned char)168;
int var_12 = -112299305;
unsigned long long int var_13 = 14914612625983059855ULL;
signed char var_14 = (signed char)-76;
unsigned char var_15 = (unsigned char)220;
unsigned int var_16 = 264267371U;
short var_17 = (short)17612;
short var_18 = (short)6995;
int zero = 0;
unsigned long long int var_19 = 16272921221187044489ULL;
unsigned long long int var_20 = 12499047290087786454ULL;
long long int var_21 = 6273016487312548806LL;
short var_22 = (short)26203;
long long int arr_6 [12] [12] [12] ;
long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 7096832054367457391LL : -534869070128464900LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1772654838963968960LL : 1797813378375652915LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
