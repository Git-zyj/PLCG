#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1009273549272503825LL;
unsigned char var_1 = (unsigned char)140;
unsigned short var_2 = (unsigned short)41351;
unsigned char var_3 = (unsigned char)166;
long long int var_4 = 4529498292698998552LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)97;
unsigned short var_7 = (unsigned short)55493;
long long int var_10 = 8643387297228213804LL;
int zero = 0;
unsigned short var_11 = (unsigned short)6382;
signed char var_12 = (signed char)-20;
unsigned char var_13 = (unsigned char)42;
signed char var_14 = (signed char)60;
unsigned long long int arr_8 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 13711778914658081124ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
