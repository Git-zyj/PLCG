#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)-28113;
int var_3 = 499938108;
short var_5 = (short)-14031;
short var_6 = (short)27666;
unsigned char var_8 = (unsigned char)135;
int var_9 = -132268547;
int var_13 = -1890368667;
int zero = 0;
unsigned long long int var_18 = 8322695074235508042ULL;
int var_19 = -586214917;
unsigned short var_20 = (unsigned short)26758;
unsigned long long int var_21 = 16739531156141967960ULL;
signed char var_22 = (signed char)-44;
short var_23 = (short)-25646;
int var_24 = 1065448025;
int var_25 = -1232655415;
unsigned char var_26 = (unsigned char)76;
unsigned int var_27 = 1334746373U;
short var_28 = (short)27637;
unsigned long long int var_29 = 15782778451617628852ULL;
_Bool var_30 = (_Bool)1;
unsigned long long int var_31 = 10317706651087705493ULL;
short var_32 = (short)-30220;
long long int var_33 = 7577424066525346797LL;
short var_34 = (short)25708;
int var_35 = -1068428544;
unsigned long long int var_36 = 2964896835985349943ULL;
unsigned long long int var_37 = 6208486672497321577ULL;
signed char var_38 = (signed char)74;
unsigned int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
int arr_2 [23] ;
int arr_3 [23] ;
unsigned int arr_4 [23] ;
short arr_5 [23] [23] ;
int arr_6 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
long long int arr_8 [23] [23] [23] ;
unsigned short arr_9 [23] [23] [23] [23] ;
int arr_10 [23] [23] [23] [23] ;
unsigned long long int arr_11 [23] ;
short arr_13 [23] [23] [23] ;
_Bool arr_14 [23] ;
unsigned int arr_15 [23] [23] ;
_Bool arr_16 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 329956396U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1325692186100113613ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1718877975;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1335873313;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 468393740U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)30266;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -335072259;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 5588714359891958816ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 7408377759864793489LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)12388 : (unsigned short)50188;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 317044653;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 1947896688964995005ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)30997 : (short)18485;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = 334184809U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
