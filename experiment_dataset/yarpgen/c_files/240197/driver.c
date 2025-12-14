#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11505;
unsigned int var_4 = 649525060U;
unsigned short var_6 = (unsigned short)39964;
unsigned int var_7 = 2921222552U;
unsigned long long int var_8 = 9197357285451148176ULL;
unsigned long long int var_9 = 15399394227516852812ULL;
unsigned int var_11 = 3840469460U;
unsigned short var_12 = (unsigned short)36421;
int zero = 0;
unsigned short var_14 = (unsigned short)35296;
unsigned int var_15 = 1928426199U;
int var_16 = -1156686864;
unsigned short var_17 = (unsigned short)40958;
long long int var_18 = -6886061062090149291LL;
int var_19 = 459124366;
short var_20 = (short)18417;
unsigned int var_21 = 1406318479U;
short var_22 = (short)3319;
int var_23 = 963176598;
long long int var_24 = -388267594881531653LL;
_Bool var_25 = (_Bool)1;
long long int arr_0 [10] ;
unsigned int arr_3 [11] ;
unsigned short arr_5 [12] ;
unsigned char arr_6 [12] ;
unsigned char arr_7 [12] ;
unsigned int arr_8 [12] ;
unsigned int arr_9 [12] [12] ;
short arr_10 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -6325486825700018288LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1047492077U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)63800;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 4261122396U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 460933972U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-31794;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
