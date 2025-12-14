#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26363;
int var_1 = -1587994105;
short var_2 = (short)-18952;
unsigned char var_3 = (unsigned char)217;
long long int var_4 = 5949679324413031095LL;
unsigned char var_5 = (unsigned char)90;
long long int var_7 = -3069110019552645351LL;
unsigned char var_8 = (unsigned char)165;
long long int var_14 = -3682319242842357073LL;
unsigned char var_15 = (unsigned char)236;
unsigned short var_16 = (unsigned short)58251;
unsigned int var_17 = 1841143271U;
unsigned short var_18 = (unsigned short)61817;
unsigned long long int var_19 = 1924039593911229801ULL;
int zero = 0;
unsigned int var_20 = 3244629505U;
unsigned char var_21 = (unsigned char)95;
unsigned int var_22 = 780686059U;
unsigned char var_23 = (unsigned char)137;
unsigned long long int var_24 = 7161031454838446285ULL;
long long int var_25 = -5944734595526775382LL;
unsigned int var_26 = 140713274U;
long long int var_27 = 8988359846375208345LL;
unsigned int var_28 = 3630251060U;
unsigned char arr_5 [11] ;
int arr_14 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_20 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -1930439105 : -388664758;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_20 [i_0] [i_1] = 3860968860U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
