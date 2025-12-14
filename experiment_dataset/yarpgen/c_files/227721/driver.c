#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8465830476772031654LL;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 1571643135510923411ULL;
int var_4 = 939765849;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_7 = -1687227128;
int var_8 = -735294577;
long long int var_9 = 672460517625891843LL;
int var_10 = 432433591;
long long int var_11 = -8193377591091342501LL;
unsigned short var_12 = (unsigned short)25711;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 12604792486615659908ULL;
unsigned char var_16 = (unsigned char)253;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)34082;
unsigned short var_19 = (unsigned short)47031;
int arr_0 [24] ;
_Bool arr_5 [20] ;
unsigned char arr_6 [20] ;
_Bool arr_8 [20] ;
unsigned long long int arr_9 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1728409662;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (unsigned char)85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_9 [i_0] [i_1] = 6425093538175608671ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
