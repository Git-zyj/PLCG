#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4204298514285864503ULL;
unsigned char var_3 = (unsigned char)55;
signed char var_4 = (signed char)-113;
int var_5 = 1278706146;
int var_6 = -1540683842;
unsigned int var_7 = 2240287475U;
unsigned long long int var_8 = 12403197188732550543ULL;
unsigned char var_9 = (unsigned char)211;
unsigned long long int var_10 = 13365845471700190618ULL;
unsigned char var_11 = (unsigned char)128;
unsigned long long int var_13 = 5079303136510712338ULL;
unsigned long long int var_15 = 13263062664139788978ULL;
int zero = 0;
signed char var_16 = (signed char)38;
_Bool var_17 = (_Bool)1;
long long int var_18 = -7313671983437200422LL;
signed char var_19 = (signed char)29;
unsigned char var_20 = (unsigned char)59;
unsigned long long int var_21 = 197804224909117501ULL;
unsigned char var_22 = (unsigned char)92;
unsigned char var_23 = (unsigned char)74;
unsigned long long int var_24 = 7943521383513624683ULL;
long long int var_25 = 4292739245837777087LL;
unsigned long long int var_26 = 7883034147833450635ULL;
int var_27 = 1592234763;
unsigned char var_28 = (unsigned char)183;
unsigned long long int var_29 = 16615360802944348779ULL;
int var_30 = 274642579;
unsigned long long int var_31 = 866646647386958434ULL;
signed char var_32 = (signed char)37;
unsigned long long int var_33 = 2864714911121783336ULL;
signed char var_34 = (signed char)127;
unsigned long long int var_35 = 17759508671018072813ULL;
unsigned int arr_0 [10] ;
unsigned long long int arr_1 [10] [10] ;
unsigned char arr_7 [22] ;
unsigned int arr_9 [22] [22] [22] ;
signed char arr_10 [22] [22] [22] [22] ;
unsigned long long int arr_11 [22] [22] ;
unsigned long long int arr_16 [22] [22] [22] [22] [22] ;
unsigned char arr_19 [22] [22] [22] ;
_Bool arr_20 [22] [22] [22] ;
unsigned int arr_24 [22] [22] [22] [22] ;
long long int arr_25 [22] ;
unsigned char arr_17 [22] [22] [22] [22] [22] ;
unsigned char arr_21 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 1105741161U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 17975710248259218139ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 429204094U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-11;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 17301660331297978701ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 9036060490462848471ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 3720151096U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 244331968823619067LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)47;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
