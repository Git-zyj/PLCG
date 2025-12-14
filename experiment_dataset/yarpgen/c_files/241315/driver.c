#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3023649569433516840ULL;
signed char var_3 = (signed char)106;
int var_6 = 1563445671;
signed char var_7 = (signed char)-92;
unsigned char var_8 = (unsigned char)3;
unsigned char var_9 = (unsigned char)100;
unsigned char var_10 = (unsigned char)13;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
unsigned char var_13 = (unsigned char)216;
long long int var_14 = -7863907615966904562LL;
long long int var_15 = -6768844090192545121LL;
unsigned long long int var_16 = 9020042312766276752ULL;
int var_17 = 1988763299;
signed char var_18 = (signed char)-92;
int var_19 = -2073740680;
signed char var_20 = (signed char)-26;
unsigned int var_21 = 3135554654U;
unsigned char arr_6 [13] ;
int arr_4 [13] ;
unsigned char arr_19 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)31 : (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1418209558 : 502918258;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)213;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
