#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-123;
unsigned char var_6 = (unsigned char)128;
int var_9 = -1344531804;
int var_11 = -2079602784;
unsigned short var_12 = (unsigned short)16788;
unsigned char var_15 = (unsigned char)176;
int zero = 0;
long long int var_19 = 4909740688702565742LL;
unsigned char var_20 = (unsigned char)202;
unsigned int var_21 = 1541203346U;
unsigned long long int var_22 = 16568664655055833380ULL;
int var_23 = 729340585;
unsigned short var_24 = (unsigned short)63292;
unsigned long long int var_25 = 5067401878567324234ULL;
unsigned long long int var_26 = 15322029580903145133ULL;
unsigned short var_27 = (unsigned short)22441;
signed char arr_0 [22] [22] ;
unsigned char arr_3 [22] ;
signed char arr_6 [22] ;
unsigned char arr_9 [22] [22] [22] [22] ;
signed char arr_13 [22] [22] [22] ;
int arr_15 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)41;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -430484380;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
