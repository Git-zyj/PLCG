#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2489531218236804847LL;
unsigned int var_1 = 379700894U;
unsigned long long int var_4 = 3057576866094836686ULL;
unsigned int var_11 = 3468951422U;
unsigned short var_12 = (unsigned short)65260;
int zero = 0;
unsigned char var_14 = (unsigned char)99;
signed char var_15 = (signed char)-121;
unsigned long long int var_16 = 2723900749027628653ULL;
unsigned char var_17 = (unsigned char)4;
unsigned long long int var_18 = 4393780304615213339ULL;
signed char var_19 = (signed char)-39;
unsigned char arr_0 [11] ;
unsigned int arr_8 [17] [17] [17] ;
int arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 381723214U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -78928368;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
