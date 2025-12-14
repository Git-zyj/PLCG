#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14570;
unsigned long long int var_4 = 11182734298634326139ULL;
int var_6 = -1309840389;
unsigned short var_7 = (unsigned short)58228;
unsigned short var_8 = (unsigned short)8547;
signed char var_9 = (signed char)45;
unsigned char var_18 = (unsigned char)62;
int zero = 0;
long long int var_19 = 1656524031083072791LL;
signed char var_20 = (signed char)89;
unsigned short var_21 = (unsigned short)6482;
unsigned char var_22 = (unsigned char)144;
long long int var_23 = 5904192273024590572LL;
int arr_3 [24] [24] ;
long long int arr_6 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -1314422000;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -5484834291777026511LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
