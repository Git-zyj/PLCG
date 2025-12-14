#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 489424905U;
unsigned int var_7 = 1007832754U;
long long int var_8 = 4864580048018323400LL;
signed char var_12 = (signed char)-26;
unsigned char var_19 = (unsigned char)131;
int zero = 0;
long long int var_20 = 6314090223266042480LL;
unsigned long long int var_21 = 12839498610418160769ULL;
unsigned int var_22 = 1093691863U;
unsigned int var_23 = 392156499U;
unsigned int var_24 = 1236491211U;
signed char var_25 = (signed char)21;
int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
signed char arr_6 [22] ;
unsigned int arr_9 [22] [22] [22] [22] [22] ;
unsigned char arr_11 [22] ;
unsigned int arr_12 [22] [22] ;
unsigned long long int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 1175361536 : -1001419023;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 7955083071863119938ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 44165235U : 3936692928U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 3601860076U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13894517528846724379ULL : 2566260524657954613ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
