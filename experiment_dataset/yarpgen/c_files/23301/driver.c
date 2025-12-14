#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1257821768512467308ULL;
unsigned long long int var_2 = 18132642216172487775ULL;
signed char var_3 = (signed char)-3;
unsigned char var_5 = (unsigned char)43;
unsigned char var_8 = (unsigned char)173;
unsigned char var_9 = (unsigned char)197;
unsigned long long int var_10 = 16536773555164268152ULL;
unsigned char var_11 = (unsigned char)132;
signed char var_12 = (signed char)-82;
unsigned long long int var_14 = 3354694529612169008ULL;
unsigned char var_15 = (unsigned char)233;
unsigned long long int var_16 = 11579351765987608336ULL;
unsigned long long int var_17 = 17871212572507994630ULL;
unsigned char var_18 = (unsigned char)254;
int zero = 0;
unsigned char var_19 = (unsigned char)67;
signed char var_20 = (signed char)-87;
unsigned char var_21 = (unsigned char)102;
int var_22 = -1000820081;
unsigned long long int var_23 = 3120632124996879718ULL;
int var_24 = 1464244292;
unsigned char arr_5 [11] ;
unsigned long long int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4223523003552369609ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
