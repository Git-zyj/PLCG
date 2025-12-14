#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11316671838568728444ULL;
unsigned long long int var_2 = 4797812931672226515ULL;
long long int var_3 = -2486355085236728505LL;
unsigned long long int var_5 = 6192612260724358056ULL;
signed char var_9 = (signed char)106;
long long int var_12 = -7692927629820935345LL;
signed char var_13 = (signed char)79;
unsigned char var_16 = (unsigned char)38;
int var_17 = -1896293404;
int zero = 0;
int var_19 = -1281395942;
int var_20 = 2059491583;
unsigned long long int var_21 = 4023441426046025714ULL;
signed char var_22 = (signed char)36;
signed char arr_0 [10] [10] ;
int arr_1 [10] ;
long long int arr_3 [10] [10] ;
unsigned long long int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1481020113;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -4382000295548594558LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 16041146293538278269ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
