#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 986085375U;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
short var_8 = (short)26225;
unsigned int var_9 = 2413657954U;
int zero = 0;
short var_11 = (short)17285;
long long int var_12 = -4955049285993012903LL;
int var_13 = 422799397;
unsigned long long int var_14 = 5109661846392537240ULL;
int var_15 = -1500658377;
unsigned short var_16 = (unsigned short)52964;
int var_17 = 1205615589;
unsigned long long int var_18 = 9191409624351650099ULL;
int var_19 = -1130157954;
unsigned char var_20 = (unsigned char)103;
int var_21 = -1356637084;
int var_22 = -1484503375;
unsigned int var_23 = 2379102199U;
int var_24 = -2078090109;
unsigned int var_25 = 1024220928U;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)89;
unsigned char var_28 = (unsigned char)226;
int var_29 = 2079261562;
long long int arr_0 [14] [14] ;
int arr_2 [14] [14] ;
unsigned long long int arr_3 [14] ;
unsigned int arr_4 [14] [14] ;
int arr_6 [14] [14] [14] ;
long long int arr_9 [14] [14] [14] ;
signed char arr_10 [14] [14] [14] ;
_Bool arr_12 [14] [14] [14] ;
unsigned short arr_14 [14] [14] ;
short arr_21 [21] [21] ;
unsigned int arr_22 [21] ;
unsigned short arr_20 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 917019333305810773LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -1299926587;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 12589448044830236459ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1786276299U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -958837858;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 7937832830790747066LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)30851;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (short)7767;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = 1705567375U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)32739 : (unsigned short)65396;
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
