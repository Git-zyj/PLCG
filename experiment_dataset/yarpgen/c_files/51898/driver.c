#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1924708922962184934ULL;
unsigned short var_1 = (unsigned short)63914;
long long int var_2 = 3079349484886686047LL;
unsigned char var_3 = (unsigned char)38;
short var_4 = (short)-4956;
_Bool var_6 = (_Bool)1;
short var_9 = (short)-32308;
int var_10 = -306242825;
unsigned char var_12 = (unsigned char)125;
long long int var_13 = 8191838646380866291LL;
long long int var_14 = 102127889152094279LL;
int zero = 0;
unsigned char var_18 = (unsigned char)38;
unsigned char var_19 = (unsigned char)31;
signed char var_20 = (signed char)-33;
short var_21 = (short)24237;
int var_22 = 1667085048;
unsigned short var_23 = (unsigned short)36321;
long long int var_24 = -2348385265598293554LL;
unsigned char var_25 = (unsigned char)164;
int var_26 = -406812829;
unsigned long long int arr_1 [19] ;
unsigned short arr_3 [25] ;
_Bool arr_6 [22] [22] ;
unsigned short arr_7 [22] ;
long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 13486139132482804337ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)19583;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)1823;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -48269338441930483LL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
