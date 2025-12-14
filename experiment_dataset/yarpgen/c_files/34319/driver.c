#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10012865183040094164ULL;
unsigned int var_1 = 587496248U;
unsigned short var_2 = (unsigned short)27295;
unsigned char var_3 = (unsigned char)97;
unsigned long long int var_4 = 8027490617190982702ULL;
short var_5 = (short)28005;
unsigned int var_6 = 3988504755U;
long long int var_8 = -3615515527002815815LL;
unsigned short var_10 = (unsigned short)55871;
_Bool var_11 = (_Bool)0;
long long int var_13 = 8781401010265165799LL;
_Bool var_14 = (_Bool)0;
int var_16 = -311481091;
unsigned char var_17 = (unsigned char)129;
int zero = 0;
short var_18 = (short)3792;
unsigned long long int var_19 = 6841560041882280272ULL;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)225;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 942482703U;
unsigned long long int var_24 = 8679084948296442149ULL;
unsigned int var_25 = 1325431081U;
long long int var_26 = 4126007270743920815LL;
_Bool var_27 = (_Bool)1;
unsigned char var_28 = (unsigned char)149;
unsigned long long int var_29 = 2357230431781102073ULL;
short var_30 = (short)29208;
unsigned int var_31 = 2203113897U;
long long int var_32 = -8670478898521899809LL;
unsigned long long int arr_0 [18] ;
unsigned char arr_1 [18] ;
long long int arr_2 [14] [14] ;
unsigned short arr_3 [14] [14] ;
unsigned long long int arr_5 [14] ;
unsigned char arr_6 [14] ;
unsigned short arr_7 [14] ;
long long int arr_8 [14] [14] ;
short arr_9 [14] [14] [14] ;
_Bool arr_12 [14] ;
signed char arr_4 [14] [14] ;
long long int arr_10 [14] [14] ;
int arr_13 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 7300002932764077687ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 8338333078161877008LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)6670;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 4860369706570320288ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (unsigned short)37217;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = -8273463131972369511LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-23251;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 4795811088035196565LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1481594990 : -1914405557;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
