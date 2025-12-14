#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8507784146445560317LL;
long long int var_1 = -4662325268871632365LL;
signed char var_2 = (signed char)-105;
signed char var_4 = (signed char)15;
signed char var_7 = (signed char)-76;
unsigned int var_8 = 2191478820U;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 3973775504509441738LL;
unsigned int var_11 = 2999953541U;
signed char var_12 = (signed char)26;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-91;
long long int var_15 = 7206018471533570166LL;
signed char var_16 = (signed char)123;
unsigned int var_17 = 1782636051U;
long long int var_18 = 8532387523628786167LL;
unsigned int var_19 = 3978010552U;
signed char var_20 = (signed char)-57;
long long int var_21 = -8592814403038470450LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = 2541153626253272237LL;
long long int var_24 = -5683138578200232830LL;
long long int var_25 = -5475361443282893476LL;
long long int var_26 = -7508630379314322006LL;
long long int arr_1 [14] [14] ;
signed char arr_2 [14] ;
signed char arr_3 [14] [14] ;
signed char arr_8 [14] [14] [14] [14] ;
long long int arr_12 [17] ;
long long int arr_13 [17] ;
_Bool arr_15 [17] [17] [17] ;
long long int arr_17 [17] [17] ;
unsigned int arr_18 [17] [17] [17] ;
unsigned int arr_20 [17] [17] ;
long long int arr_21 [17] [17] [17] ;
unsigned int arr_23 [17] ;
signed char arr_27 [17] ;
long long int arr_34 [22] ;
signed char arr_36 [22] ;
signed char arr_40 [22] [22] [22] ;
signed char arr_41 [22] [22] [22] [22] ;
signed char arr_9 [14] [14] [14] [14] ;
unsigned int arr_10 [14] [14] [14] ;
signed char arr_11 [14] [14] ;
_Bool arr_28 [17] ;
unsigned int arr_32 [17] ;
_Bool arr_33 [17] ;
signed char arr_42 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 8798813034704281694LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = -5975190480038794930LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = -8331002320817002672LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 6040298211214133849LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 835791108U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 1996784717U : 118821424U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8146954809103621224LL : -4008837458491646808LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = 4059370634U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = (signed char)78;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = -4733085608581101123LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (signed char)124;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 702705900U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = 1012130618U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (signed char)-126;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
