#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_20 = 8491596840428182176LL;
long long int var_21 = -4206943341484285172LL;
unsigned long long int var_22 = 6777082659349762469ULL;
_Bool var_23 = (_Bool)1;
int var_24 = -2077468286;
unsigned char var_25 = (unsigned char)48;
int var_26 = -1162888857;
unsigned char var_27 = (unsigned char)63;
signed char var_28 = (signed char)36;
unsigned short var_29 = (unsigned short)11999;
unsigned long long int var_30 = 9607445212888704027ULL;
int var_31 = 153984656;
_Bool var_32 = (_Bool)0;
unsigned long long int var_33 = 1122534813503960365ULL;
unsigned short var_34 = (unsigned short)22603;
_Bool var_35 = (_Bool)0;
long long int var_36 = -4300176177982682643LL;
short var_37 = (short)2655;
int var_38 = 819838107;
int arr_4 [25] [25] ;
unsigned short arr_5 [25] ;
unsigned long long int arr_11 [25] [25] [25] [25] ;
long long int arr_28 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -1900335872;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)31607;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 6215551747336457481ULL : 1941797572486841570ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -9119784097023045359LL : 7222645757287573771LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
