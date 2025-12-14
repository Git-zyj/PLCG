#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6892207620014292765LL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)23;
int var_4 = -1136177061;
unsigned long long int var_5 = 2986761013974385269ULL;
short var_6 = (short)-22827;
unsigned int var_7 = 1188481939U;
short var_9 = (short)6572;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)203;
int zero = 0;
long long int var_14 = 1370345137586138766LL;
signed char var_15 = (signed char)27;
unsigned long long int var_16 = 10060733572476438062ULL;
unsigned int var_17 = 2764883290U;
unsigned short var_18 = (unsigned short)16342;
signed char var_19 = (signed char)-57;
signed char var_20 = (signed char)-78;
long long int var_21 = 3273091934336733848LL;
unsigned int var_22 = 1787268469U;
unsigned char var_23 = (unsigned char)242;
unsigned long long int arr_1 [17] ;
long long int arr_3 [22] ;
unsigned long long int arr_4 [22] [22] ;
short arr_5 [22] [22] ;
unsigned char arr_7 [22] ;
int arr_9 [22] ;
unsigned int arr_10 [22] [22] ;
unsigned short arr_14 [22] ;
_Bool arr_18 [24] [24] ;
int arr_2 [17] ;
short arr_6 [22] ;
unsigned char arr_11 [22] ;
unsigned long long int arr_16 [22] ;
unsigned int arr_19 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 14496682320792620319ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = -5867651525093491242LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 201550316320104463ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-15485;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = -1371014284;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = 419994735U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)62905;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -508441652;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (short)5432;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 1207696725215661102ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 1172984953U;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
