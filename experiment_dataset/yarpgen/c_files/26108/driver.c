#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8810018359883988909LL;
signed char var_1 = (signed char)-79;
signed char var_2 = (signed char)111;
int var_4 = 775794344;
int var_5 = -441320907;
short var_9 = (short)14991;
int var_12 = -2001328032;
signed char var_13 = (signed char)8;
unsigned long long int var_14 = 4358181003822493822ULL;
int var_17 = -1144357635;
int zero = 0;
unsigned short var_19 = (unsigned short)45532;
unsigned long long int var_20 = 8504092201021217031ULL;
short var_21 = (short)27105;
unsigned long long int arr_1 [24] ;
unsigned short arr_2 [24] ;
int arr_3 [24] [24] [24] ;
short arr_4 [24] [24] ;
unsigned char arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 11558222408215965074ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)35286;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -680950786;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-16662;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)115;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
