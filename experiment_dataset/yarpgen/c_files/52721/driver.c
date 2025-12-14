#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-84;
long long int var_3 = 7960420641831091111LL;
unsigned short var_4 = (unsigned short)438;
short var_8 = (short)-10350;
long long int var_9 = -4508113151872682643LL;
int zero = 0;
long long int var_11 = 3733825159956077223LL;
unsigned int var_12 = 2708683815U;
unsigned char var_13 = (unsigned char)102;
signed char var_14 = (signed char)127;
long long int var_15 = 4511265209655842368LL;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-31860;
unsigned long long int var_18 = 5207542130048810602ULL;
unsigned char var_19 = (unsigned char)111;
unsigned short arr_0 [14] ;
long long int arr_4 [14] ;
signed char arr_5 [14] [14] [14] ;
long long int arr_6 [14] [14] [14] ;
_Bool arr_9 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)64813;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -176936895541109817LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -4365729101634846395LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
