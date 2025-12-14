#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 990319366U;
unsigned long long int var_1 = 15012516742652656213ULL;
unsigned int var_2 = 3019310905U;
unsigned int var_4 = 3293962044U;
unsigned char var_5 = (unsigned char)66;
_Bool var_6 = (_Bool)0;
short var_7 = (short)32414;
int var_8 = 966307099;
unsigned int var_9 = 2140063588U;
int var_10 = 1130196681;
int zero = 0;
int var_13 = -128640500;
int var_14 = -260354187;
unsigned char var_15 = (unsigned char)175;
unsigned long long int var_16 = 2424875367892364742ULL;
unsigned int var_17 = 471610831U;
unsigned short var_18 = (unsigned short)7525;
unsigned long long int var_19 = 15195805331104177645ULL;
unsigned int var_20 = 3098606170U;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
long long int arr_3 [19] [19] ;
short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9859509721431700741ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36201 : (unsigned short)8791;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -7865483812646725157LL : 7147467635383213671LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-14132 : (short)-31053;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
