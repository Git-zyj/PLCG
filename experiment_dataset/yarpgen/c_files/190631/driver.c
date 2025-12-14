#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38497;
unsigned short var_1 = (unsigned short)29752;
unsigned int var_2 = 2834148597U;
signed char var_3 = (signed char)-98;
unsigned short var_4 = (unsigned short)8836;
unsigned char var_5 = (unsigned char)208;
signed char var_7 = (signed char)4;
unsigned short var_8 = (unsigned short)36631;
long long int var_9 = -6623653514534381639LL;
unsigned char var_10 = (unsigned char)182;
unsigned short var_11 = (unsigned short)43277;
signed char var_12 = (signed char)-29;
unsigned short var_13 = (unsigned short)54602;
unsigned short var_14 = (unsigned short)13510;
unsigned int var_15 = 3069576590U;
int zero = 0;
unsigned int var_17 = 562020613U;
signed char var_18 = (signed char)87;
long long int var_19 = -1053246285295754195LL;
unsigned char var_20 = (unsigned char)104;
unsigned char var_21 = (unsigned char)62;
unsigned char var_22 = (unsigned char)4;
unsigned short var_23 = (unsigned short)34340;
unsigned short var_24 = (unsigned short)55121;
unsigned short arr_0 [21] ;
signed char arr_1 [21] ;
unsigned short arr_2 [21] ;
long long int arr_3 [21] [21] ;
signed char arr_4 [21] [21] [21] ;
unsigned long long int arr_5 [21] [21] [21] ;
unsigned short arr_10 [25] ;
unsigned long long int arr_11 [25] ;
signed char arr_12 [25] ;
unsigned short arr_13 [25] [25] [25] ;
unsigned int arr_14 [25] [25] ;
unsigned int arr_18 [25] [25] [25] ;
signed char arr_9 [10] ;
unsigned short arr_15 [25] ;
unsigned short arr_16 [25] [25] ;
unsigned long long int arr_17 [25] [25] ;
unsigned char arr_20 [25] [25] ;
unsigned int arr_21 [25] [25] [25] ;
long long int arr_22 [25] [25] ;
unsigned long long int arr_26 [16] ;
unsigned char arr_31 [16] [16] ;
unsigned short arr_32 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)15091;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-12;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)9804;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -6282731482943894656LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 822318823573591388ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)63580;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = 15430217465655131496ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)38738 : (unsigned short)55228;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_14 [i_0] [i_1] = 1956663325U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 2474454678U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43711 : (unsigned short)27791;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50307 : (unsigned short)62957;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 1143646221612911730ULL : 5488221329039133177ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 373948659U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_22 [i_0] [i_1] = -5918737653258062147LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_26 [i_0] = 1420407636335042666ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)250;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_32 [i_0] = (unsigned short)43321;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
