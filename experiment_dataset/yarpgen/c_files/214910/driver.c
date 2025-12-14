#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8199045557838243346LL;
unsigned long long int var_2 = 4829154412744091116ULL;
int var_3 = -1864859452;
unsigned long long int var_4 = 1209104361989987188ULL;
unsigned long long int var_5 = 6742154131874468706ULL;
int var_6 = 1904264515;
unsigned char var_7 = (unsigned char)165;
unsigned char var_8 = (unsigned char)83;
unsigned long long int var_9 = 15504954447956599708ULL;
unsigned long long int var_10 = 9453961818934308582ULL;
unsigned long long int var_11 = 17510167330174686232ULL;
long long int var_12 = -4116976562629448544LL;
long long int var_13 = -728119620487463420LL;
unsigned long long int var_14 = 3538051120125593549ULL;
unsigned long long int var_16 = 11003939219513266783ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)63747;
unsigned char var_19 = (unsigned char)11;
unsigned short var_20 = (unsigned short)51061;
int var_21 = 1404494693;
long long int var_22 = -58082279627942588LL;
unsigned long long int var_23 = 6174570230030492102ULL;
unsigned long long int var_24 = 12397208113470494067ULL;
unsigned char var_25 = (unsigned char)189;
unsigned long long int var_26 = 3341976488531154145ULL;
unsigned short var_27 = (unsigned short)41550;
long long int var_28 = 2921549604855578306LL;
unsigned long long int var_29 = 14490011411928156051ULL;
unsigned char var_30 = (unsigned char)34;
long long int var_31 = 5624580625651099264LL;
unsigned char var_32 = (unsigned char)192;
int var_33 = -1370153030;
int var_34 = 1507621616;
int arr_0 [19] ;
long long int arr_1 [19] ;
unsigned long long int arr_2 [19] [19] [19] ;
unsigned int arr_3 [19] ;
unsigned long long int arr_5 [19] ;
unsigned long long int arr_7 [17] ;
unsigned long long int arr_6 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1073385103;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4895506154896995866LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7523852253957519025ULL : 10540174656622804064ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 2802788262U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 11896032089670953745ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 12629256330404601413ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 9620453119312206098ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
