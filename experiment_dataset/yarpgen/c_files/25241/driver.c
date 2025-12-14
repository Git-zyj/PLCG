#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -350976368;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 7986160346679353958ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)36652;
unsigned int var_10 = 1688384530U;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 17207678017495863975ULL;
unsigned short var_13 = (unsigned short)4905;
int zero = 0;
short var_15 = (short)-22607;
unsigned long long int var_16 = 16011409021325087599ULL;
unsigned long long int var_17 = 7317276297798486617ULL;
unsigned long long int var_18 = 4651590645047452638ULL;
unsigned short var_19 = (unsigned short)38019;
unsigned long long int var_20 = 3509138832462938604ULL;
unsigned long long int var_21 = 2686957864248473850ULL;
int var_22 = -327494089;
short var_23 = (short)18812;
long long int var_24 = -3750660787840019939LL;
unsigned short var_25 = (unsigned short)45775;
unsigned short arr_0 [22] [22] ;
long long int arr_1 [22] ;
long long int arr_2 [22] ;
int arr_4 [22] ;
long long int arr_5 [22] [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned long long int arr_7 [22] [22] ;
long long int arr_8 [22] [22] [22] [22] ;
short arr_9 [22] [22] [22] ;
_Bool arr_11 [22] ;
unsigned short arr_12 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_14 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)3327;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2670013534650490200LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3133027275147948239LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1324200803;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8858821137353871287LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 11239147926458220379ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 10011312732119547160ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1163501286839658859LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)19682;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)43542;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 13878228385541035762ULL : 11331894143166439819ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
