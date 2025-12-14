#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13177400802470271017ULL;
unsigned char var_2 = (unsigned char)8;
long long int var_3 = -5299347029882619083LL;
short var_4 = (short)-19737;
long long int var_5 = 2478356705445177441LL;
unsigned long long int var_8 = 8611055833210195263ULL;
unsigned int var_9 = 3333955692U;
unsigned long long int var_10 = 6185419672539656826ULL;
int var_11 = 1398384977;
int zero = 0;
long long int var_12 = 5177010313170510831LL;
unsigned long long int var_13 = 7069063464673853759ULL;
signed char var_14 = (signed char)86;
short var_15 = (short)28751;
signed char var_16 = (signed char)120;
short var_17 = (short)10994;
signed char var_18 = (signed char)118;
short var_19 = (short)17996;
signed char arr_0 [22] ;
unsigned char arr_2 [22] ;
short arr_3 [22] [22] ;
unsigned int arr_8 [22] [22] [22] ;
unsigned int arr_9 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-12169 : (short)5787;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3628202634U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2074914452U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
