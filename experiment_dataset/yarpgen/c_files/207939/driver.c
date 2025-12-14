#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6810432496446949649LL;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)29;
signed char var_6 = (signed char)67;
signed char var_10 = (signed char)-59;
signed char var_11 = (signed char)29;
signed char var_12 = (signed char)44;
int var_13 = -366796486;
long long int var_14 = 181154357485166683LL;
short var_15 = (short)27292;
unsigned short var_16 = (unsigned short)32957;
long long int var_17 = 8037720378086462178LL;
int zero = 0;
unsigned short var_19 = (unsigned short)25753;
long long int var_20 = 6249023245660245141LL;
int var_21 = 712877649;
signed char var_22 = (signed char)-99;
short var_23 = (short)-12634;
int var_24 = 1232447653;
short arr_0 [24] ;
unsigned char arr_1 [24] ;
short arr_5 [12] ;
int arr_8 [20] ;
int arr_9 [20] ;
unsigned char arr_2 [24] ;
signed char arr_6 [12] [12] ;
signed char arr_7 [12] ;
int arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-31387;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-21325;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1099390564;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 253441492;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 760282524;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
