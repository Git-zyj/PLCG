#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-24591;
unsigned int var_1 = 3300140619U;
unsigned long long int var_2 = 10286174258205268861ULL;
unsigned int var_3 = 748206792U;
long long int var_4 = -694326317516816873LL;
unsigned long long int var_5 = 8774703533540899538ULL;
signed char var_6 = (signed char)(-127 - 1);
short var_7 = (short)-11215;
short var_8 = (short)-12296;
signed char var_9 = (signed char)62;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)180;
unsigned long long int var_12 = 893873441809062302ULL;
unsigned long long int var_14 = 15343656953029373851ULL;
unsigned long long int var_15 = 4604060555234302857ULL;
unsigned short var_16 = (unsigned short)39940;
unsigned int var_17 = 1766450659U;
int var_18 = 1799597617;
int zero = 0;
short var_19 = (short)10865;
unsigned long long int var_20 = 15480333139705039191ULL;
int var_21 = -855248025;
unsigned long long int var_22 = 18005618525938555151ULL;
long long int var_23 = 4060114279770995758LL;
signed char var_24 = (signed char)119;
short var_25 = (short)-30817;
long long int var_26 = -7608361579516410448LL;
int var_27 = 963165400;
unsigned long long int var_28 = 15625817472762314357ULL;
short var_29 = (short)-4204;
short var_30 = (short)738;
int var_31 = -194400074;
unsigned long long int var_32 = 14393509319983117967ULL;
short var_33 = (short)8112;
unsigned char var_34 = (unsigned char)140;
signed char var_35 = (signed char)55;
unsigned long long int var_36 = 13720775955991769771ULL;
signed char var_37 = (signed char)-27;
long long int var_38 = 5637894627562435582LL;
signed char var_39 = (signed char)55;
int var_40 = -888942871;
long long int var_41 = 963705985517323274LL;
int arr_0 [19] [19] ;
int arr_1 [19] ;
int arr_3 [19] ;
int arr_4 [19] [19] ;
unsigned short arr_5 [19] ;
long long int arr_8 [19] [19] [19] [19] ;
unsigned long long int arr_9 [19] [19] ;
unsigned int arr_10 [19] [19] ;
int arr_11 [19] ;
long long int arr_12 [19] [19] [19] [19] [19] ;
short arr_14 [19] [19] [19] [19] ;
unsigned long long int arr_16 [19] [19] [19] [19] ;
signed char arr_17 [19] [19] [19] [19] ;
int arr_21 [14] [14] ;
unsigned int arr_22 [15] ;
int arr_23 [15] [15] ;
unsigned long long int arr_24 [15] ;
short arr_15 [19] [19] [19] [19] ;
int arr_27 [15] [15] ;
unsigned char arr_28 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = -1983998480;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 717114731;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 1620238521;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1946968967 : 752736135;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (unsigned short)41402;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5244567043927103357LL : 6443558541303049592LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 2261731342992782394ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = 827410363U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = 148690038;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 7822247176199415211LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (short)-24748;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 12903273860353012039ULL : 17413435263347804735ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = -1771982644;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 2649372666U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = 775003746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 9002441204707701607ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)14532 : (short)-28752;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? 1386238967 : 13356407;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned char)40 : (unsigned char)64;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
