#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 7976768254795243359ULL;
unsigned int var_6 = 1699785017U;
int zero = 0;
int var_12 = -1552940260;
long long int var_13 = 2294909318897110681LL;
_Bool var_14 = (_Bool)1;
int var_15 = -2033738634;
unsigned short var_16 = (unsigned short)8938;
unsigned int var_17 = 1078109588U;
int var_18 = -1095117331;
long long int var_19 = 1263820274703376666LL;
unsigned char var_20 = (unsigned char)211;
unsigned long long int var_21 = 6736494553138911933ULL;
signed char var_22 = (signed char)42;
_Bool var_23 = (_Bool)1;
long long int var_24 = -5604273106570198589LL;
unsigned long long int var_25 = 17349519714088899734ULL;
unsigned int var_26 = 462077738U;
long long int var_27 = -1146746868455831878LL;
unsigned long long int var_28 = 8100037948444336304ULL;
int arr_0 [22] [22] ;
unsigned long long int arr_3 [22] ;
short arr_5 [22] [22] [22] ;
unsigned short arr_7 [22] ;
int arr_8 [22] ;
long long int arr_15 [22] ;
_Bool arr_17 [22] [22] [22] [22] ;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 1538996108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 16171816349539916563ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-14719;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)20416;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 100583431;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 3980932532796398828LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 4162235638U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
