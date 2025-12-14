#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13604;
long long int var_1 = 5589757309021031447LL;
unsigned long long int var_3 = 16010776202895569619ULL;
unsigned int var_4 = 1733884889U;
_Bool var_5 = (_Bool)1;
long long int var_7 = -7550782293749173283LL;
unsigned short var_8 = (unsigned short)36496;
short var_9 = (short)19907;
short var_11 = (short)12627;
int var_12 = 1654764388;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)17;
unsigned char var_18 = (unsigned char)104;
unsigned char var_19 = (unsigned char)36;
long long int var_20 = -2515798150556795169LL;
short var_21 = (short)11683;
int var_22 = -393249069;
unsigned long long int var_23 = 3509551233073104920ULL;
short arr_0 [21] ;
short arr_2 [21] ;
unsigned short arr_4 [21] [21] [21] ;
long long int arr_6 [21] [21] ;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)22227;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)5134;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)40399;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -1202128433227110921LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
