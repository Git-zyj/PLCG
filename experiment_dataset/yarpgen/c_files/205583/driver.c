#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
unsigned long long int var_2 = 8991142211702837388ULL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-98;
unsigned char var_6 = (unsigned char)92;
int var_7 = -1582690275;
unsigned short var_8 = (unsigned short)63492;
int var_9 = 1782649783;
signed char var_10 = (signed char)-66;
int var_12 = -1971066685;
long long int var_13 = 5009424000623054398LL;
short var_15 = (short)5275;
int zero = 0;
int var_16 = 30070446;
int var_17 = 1303575794;
int var_18 = 516478262;
_Bool var_19 = (_Bool)0;
long long int var_20 = 7692430636807671506LL;
int var_21 = 206244409;
signed char var_22 = (signed char)34;
signed char var_23 = (signed char)67;
signed char var_24 = (signed char)47;
int var_25 = -1610449373;
unsigned long long int var_26 = 16572160547665705156ULL;
unsigned char var_27 = (unsigned char)61;
int var_28 = 460318644;
int arr_2 [11] [11] [11] ;
unsigned short arr_6 [20] ;
signed char arr_7 [20] ;
long long int arr_10 [20] ;
short arr_4 [11] ;
long long int arr_8 [20] ;
unsigned int arr_11 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1124502583 : -1981322899;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned short)60211;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = 1372889547351869565LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-2805 : (short)-311;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = -2744788119592414070LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = 1949922699U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
