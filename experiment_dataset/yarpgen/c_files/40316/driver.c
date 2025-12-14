#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1267272868;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)129;
short var_4 = (short)15554;
int var_5 = -1239391980;
int var_6 = 1166719470;
unsigned long long int var_7 = 4570495109851758644ULL;
int var_8 = -1810139929;
unsigned char var_9 = (unsigned char)235;
unsigned long long int var_11 = 665481269020782770ULL;
int var_13 = -49456311;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int var_16 = -549728213;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 406635176U;
long long int var_19 = -4484981102715969064LL;
unsigned char var_20 = (unsigned char)166;
int var_21 = 255259143;
int var_22 = -540147781;
unsigned short var_23 = (unsigned short)51802;
unsigned long long int var_24 = 10354163523399433164ULL;
unsigned char arr_1 [19] [19] ;
short arr_6 [17] ;
unsigned char arr_2 [19] ;
unsigned char arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)13677;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)74;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
