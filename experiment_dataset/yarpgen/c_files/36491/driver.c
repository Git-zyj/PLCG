#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7824715250579531241LL;
long long int var_1 = 5908536884039715452LL;
unsigned short var_2 = (unsigned short)60198;
short var_4 = (short)-23107;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 3273260202876770826ULL;
int var_7 = 1439009741;
signed char var_9 = (signed char)-95;
long long int var_10 = 4905495921273371411LL;
unsigned long long int var_12 = 8734007350422771480ULL;
signed char var_13 = (signed char)-108;
int var_14 = 1920007475;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)13667;
unsigned long long int var_17 = 6738640725571984415ULL;
signed char var_18 = (signed char)48;
signed char var_19 = (signed char)-44;
long long int var_20 = 8100851907567392409LL;
int var_21 = 173580076;
unsigned int var_22 = 1429645057U;
long long int var_23 = -7681037547567198074LL;
int var_24 = 1766447966;
unsigned short var_25 = (unsigned short)30629;
signed char var_26 = (signed char)55;
unsigned short var_27 = (unsigned short)39513;
unsigned short arr_0 [24] ;
long long int arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
unsigned long long int arr_3 [24] [24] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_6 [24] [24] [24] ;
int arr_7 [16] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)25994;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1203209956946231745LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 4769456576547221622ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 3562401731812657264ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3313904420120566527ULL : 15202485707345246487ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1770100265793724366ULL : 18299602657268829320ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 654336630;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = -4362617233928774353LL;
}

void checksum() {
    hash(&seed, var_15);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
