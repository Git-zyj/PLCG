#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)103;
signed char var_4 = (signed char)30;
unsigned char var_5 = (unsigned char)30;
unsigned char var_7 = (unsigned char)61;
long long int var_9 = 4484646788879771191LL;
long long int var_10 = 4882640945976540166LL;
unsigned char var_13 = (unsigned char)166;
unsigned char var_15 = (unsigned char)252;
long long int var_17 = -4351460730849278014LL;
long long int var_18 = -6657712771947664111LL;
int zero = 0;
long long int var_19 = 2583318637452781510LL;
unsigned char var_20 = (unsigned char)188;
signed char var_21 = (signed char)82;
unsigned char var_22 = (unsigned char)159;
long long int var_23 = -8082766187807122076LL;
signed char arr_0 [10] ;
signed char arr_4 [10] [10] [10] [10] ;
unsigned char arr_6 [10] [10] [10] ;
long long int arr_9 [21] ;
signed char arr_8 [10] [10] ;
unsigned char arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 6806562551047233646LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)29;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
