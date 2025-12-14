#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)10;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)91;
unsigned int var_5 = 4115682519U;
signed char var_7 = (signed char)83;
signed char var_9 = (signed char)-74;
_Bool var_13 = (_Bool)0;
unsigned long long int var_15 = 13964527043798988948ULL;
int zero = 0;
int var_16 = 1340005623;
long long int var_17 = -4106725945395511720LL;
unsigned char var_18 = (unsigned char)202;
unsigned long long int var_19 = 17551358831795906034ULL;
unsigned int var_20 = 2804980071U;
unsigned long long int var_21 = 3657813609321881028ULL;
unsigned short var_22 = (unsigned short)44511;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)3381;
unsigned long long int var_26 = 17742363085062397931ULL;
int arr_0 [10] [10] ;
unsigned short arr_4 [10] ;
unsigned short arr_5 [10] [10] [10] ;
unsigned long long int arr_9 [10] [10] ;
unsigned short arr_3 [10] ;
_Bool arr_12 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -457324833;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)28383;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)55143 : (unsigned short)64336;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 14744752799688077335ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)43534;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
