#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1662108783733022227LL;
unsigned char var_2 = (unsigned char)26;
int var_3 = -1167581116;
short var_4 = (short)-7603;
int var_5 = 1127018587;
int var_6 = -1231775001;
unsigned int var_7 = 2993553994U;
unsigned long long int var_8 = 12298055955537176705ULL;
long long int var_9 = -3350457896799465273LL;
short var_10 = (short)-4409;
int var_11 = -1676959944;
int var_12 = 218901872;
unsigned char var_13 = (unsigned char)124;
unsigned int var_14 = 2338974395U;
unsigned int var_16 = 1825943219U;
int zero = 0;
int var_17 = 717111762;
short var_18 = (short)-18140;
int var_19 = -1891060862;
unsigned short var_20 = (unsigned short)50381;
unsigned long long int var_21 = 16833323041178116127ULL;
unsigned int var_22 = 1906413447U;
long long int var_23 = -957481199692845142LL;
unsigned short var_24 = (unsigned short)64897;
unsigned short var_25 = (unsigned short)29534;
_Bool var_26 = (_Bool)0;
short var_27 = (short)-15131;
int var_28 = -267340966;
int var_29 = -459949393;
int var_30 = 2039558773;
unsigned short var_31 = (unsigned short)41244;
int var_32 = -1519876777;
unsigned short var_33 = (unsigned short)16308;
int arr_0 [16] [16] ;
_Bool arr_5 [16] ;
int arr_7 [19] ;
unsigned char arr_8 [19] ;
short arr_9 [19] ;
unsigned short arr_10 [19] ;
unsigned char arr_16 [17] ;
unsigned short arr_21 [17] [17] [17] ;
unsigned char arr_22 [17] [17] ;
unsigned long long int arr_26 [17] ;
unsigned char arr_14 [11] [11] ;
_Bool arr_15 [11] ;
long long int arr_25 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -2098843983;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = 1488535713;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (short)6074;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)6387;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)26104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = 6897830214828805133ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -5800445225720615211LL : -5999414054578865697LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
