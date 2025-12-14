#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2014234373U;
long long int var_1 = -3097728230717452976LL;
unsigned int var_2 = 1944836417U;
long long int var_3 = 1580788653333943330LL;
unsigned int var_5 = 88532386U;
short var_6 = (short)15538;
signed char var_7 = (signed char)-31;
signed char var_8 = (signed char)-69;
unsigned long long int var_9 = 18373366375291201880ULL;
unsigned char var_10 = (unsigned char)132;
int zero = 0;
short var_13 = (short)2923;
unsigned char var_14 = (unsigned char)187;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2252017152U;
unsigned char var_17 = (unsigned char)180;
int var_18 = -1007530666;
unsigned int var_19 = 1307104753U;
long long int var_20 = 6603913229080008755LL;
unsigned long long int var_21 = 3515309177734051723ULL;
unsigned long long int var_22 = 8590598343570827924ULL;
unsigned long long int var_23 = 283577382858389133ULL;
short var_24 = (short)20824;
unsigned char var_25 = (unsigned char)17;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 18010017088406487654ULL;
signed char var_30 = (signed char)35;
signed char var_31 = (signed char)7;
long long int var_32 = -6150921639124064233LL;
unsigned int arr_1 [15] ;
_Bool arr_2 [15] ;
long long int arr_4 [15] [15] ;
long long int arr_11 [15] [15] ;
_Bool arr_15 [25] ;
_Bool arr_16 [25] [25] ;
unsigned char arr_20 [24] [24] ;
unsigned int arr_21 [24] ;
unsigned char arr_29 [11] [11] ;
int arr_13 [15] [15] [15] ;
_Bool arr_17 [25] ;
long long int arr_25 [10] [10] ;
signed char arr_26 [10] ;
unsigned int arr_31 [11] ;
unsigned int arr_35 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3731525207U : 276980960U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -8807089063560681998LL : -298597035436506774LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = -3582772512308470532LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = 597671737U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -1789453771 : -1411514664;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_17 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_25 [i_0] [i_1] = -2202636914631044143LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = 1278129534U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = 3109038174U;
}

void checksum() {
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
