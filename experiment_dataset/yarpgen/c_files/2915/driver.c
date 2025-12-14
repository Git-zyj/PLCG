#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1429787;
unsigned int var_3 = 3600180375U;
unsigned short var_4 = (unsigned short)1222;
unsigned short var_7 = (unsigned short)31820;
_Bool var_8 = (_Bool)0;
unsigned short var_11 = (unsigned short)61955;
unsigned short var_12 = (unsigned short)14545;
unsigned short var_13 = (unsigned short)41591;
unsigned short var_17 = (unsigned short)36696;
unsigned int var_18 = 489703304U;
int zero = 0;
unsigned short var_19 = (unsigned short)53148;
unsigned short var_20 = (unsigned short)34569;
unsigned short var_21 = (unsigned short)24279;
int var_22 = -1517099394;
unsigned short var_23 = (unsigned short)7799;
int var_24 = 1464682592;
unsigned short var_25 = (unsigned short)12308;
unsigned short var_26 = (unsigned short)63676;
unsigned short var_27 = (unsigned short)14664;
int var_28 = 975178119;
unsigned short var_29 = (unsigned short)27221;
unsigned short var_30 = (unsigned short)44896;
unsigned int var_31 = 2791629150U;
unsigned short arr_6 [17] ;
unsigned short arr_7 [17] [17] ;
unsigned short arr_11 [16] ;
unsigned short arr_26 [25] ;
unsigned short arr_27 [25] ;
int arr_4 [16] [16] ;
_Bool arr_5 [16] ;
int arr_8 [17] [17] ;
int arr_9 [17] [17] ;
int arr_24 [16] [16] [16] ;
unsigned int arr_25 [16] ;
unsigned short arr_28 [25] ;
int arr_29 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)31830;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)53001;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (unsigned short)44206;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = (unsigned short)60841;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_27 [i_0] = (unsigned short)14371;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -1868216645;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = 297142799;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = -920569186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 676541007 : 681149965;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 701107332U : 3539024667U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (unsigned short)47906;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_29 [i_0] = 594751554;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
