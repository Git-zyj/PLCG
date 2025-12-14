#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
unsigned long long int var_1 = 3965340339127288759ULL;
unsigned int var_2 = 1527077426U;
_Bool var_3 = (_Bool)1;
int var_4 = 1190004899;
unsigned long long int var_7 = 4912577412279380261ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 1823880878357019268ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)22490;
long long int var_13 = 5266299192771624652LL;
unsigned short var_14 = (unsigned short)47718;
unsigned short var_15 = (unsigned short)4661;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)48103;
long long int var_19 = -4157721196856904827LL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11811974591853840232ULL;
unsigned char var_22 = (unsigned char)178;
long long int var_23 = 466881072787635982LL;
unsigned int arr_0 [22] ;
unsigned int arr_2 [22] ;
unsigned short arr_5 [24] ;
long long int arr_6 [24] ;
int arr_8 [24] ;
long long int arr_10 [24] [24] ;
long long int arr_11 [24] [24] ;
_Bool arr_12 [24] ;
unsigned long long int arr_22 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 11382472U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 2841575042U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)25407;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4970684025430993177LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 133235157 : -1031941771;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = 392748610754696666LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -8485765503916650205LL : -295769778112159112LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 3387023959688040125ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
