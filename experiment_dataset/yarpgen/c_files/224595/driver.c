#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1234507928U;
unsigned int var_4 = 3548145818U;
long long int var_5 = 2403718749197763768LL;
signed char var_6 = (signed char)-13;
short var_11 = (short)9863;
unsigned short var_12 = (unsigned short)35862;
short var_14 = (short)25195;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-63;
unsigned short var_17 = (unsigned short)31001;
int zero = 0;
unsigned int var_18 = 929021168U;
unsigned long long int var_19 = 9460705939652325115ULL;
unsigned char var_20 = (unsigned char)132;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)92;
short var_23 = (short)-12570;
unsigned long long int var_24 = 11264272122844157604ULL;
int arr_0 [20] [20] ;
long long int arr_2 [20] [20] [20] ;
unsigned char arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 1432097485;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -3072595954424159132LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)233;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
