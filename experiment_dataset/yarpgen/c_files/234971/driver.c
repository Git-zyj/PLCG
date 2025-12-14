#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1868253247;
unsigned short var_1 = (unsigned short)316;
short var_2 = (short)8178;
int var_3 = -495314365;
long long int var_5 = 8508581721286397679LL;
unsigned char var_8 = (unsigned char)74;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 2305562007U;
unsigned int var_14 = 1872180313U;
unsigned int var_15 = 3516284931U;
unsigned int var_17 = 601809634U;
long long int var_18 = -8363941454493498453LL;
int zero = 0;
long long int var_19 = -2825594201865123168LL;
signed char var_20 = (signed char)85;
signed char var_21 = (signed char)56;
long long int var_22 = 3353036634269825615LL;
signed char var_23 = (signed char)99;
long long int var_24 = -4602152832798251105LL;
short var_25 = (short)13329;
int var_26 = 554273082;
signed char var_27 = (signed char)21;
unsigned short var_28 = (unsigned short)51855;
long long int var_29 = 572137417463529469LL;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 14304985943859320539ULL;
_Bool var_32 = (_Bool)0;
long long int var_33 = 1710208486081291458LL;
int var_34 = -573892811;
int var_35 = 1696617269;
signed char var_36 = (signed char)27;
short var_37 = (short)20415;
short var_38 = (short)-18856;
unsigned int var_39 = 4019900113U;
short arr_5 [17] [17] ;
unsigned long long int arr_6 [17] ;
long long int arr_9 [19] [19] ;
long long int arr_22 [19] [19] ;
short arr_23 [19] [19] [19] ;
signed char arr_29 [16] ;
int arr_44 [16] [16] ;
long long int arr_45 [16] ;
long long int arr_46 [16] [16] [16] ;
long long int arr_53 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-5724;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 792191043430950695ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1972718757053887523LL : -1935029771806226166LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 9069412936183673291LL : -6610415541526915491LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)18437 : (short)15033;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (signed char)-57 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? 579267600 : -1805647065;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 8483303019931183827LL : -8333493038288774554LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -8277014572293680863LL : -6508504553106784089LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_53 [i_0] [i_1] = -5036039791936203355LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
