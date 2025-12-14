#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14252512392414550628ULL;
unsigned char var_1 = (unsigned char)46;
unsigned char var_2 = (unsigned char)169;
short var_3 = (short)24697;
unsigned int var_4 = 3412937585U;
unsigned char var_5 = (unsigned char)26;
unsigned long long int var_8 = 6206740280462195026ULL;
unsigned short var_9 = (unsigned short)42000;
int var_11 = -909402899;
unsigned char var_12 = (unsigned char)199;
signed char var_13 = (signed char)82;
int zero = 0;
int var_14 = 1879139899;
unsigned int var_15 = 3427877112U;
unsigned char var_16 = (unsigned char)210;
int var_17 = -144553007;
long long int arr_6 [19] [19] [19] ;
long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -5761532083575461937LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -8367522397378353809LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
