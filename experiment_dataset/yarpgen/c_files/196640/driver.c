#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)199;
int var_4 = -1376410028;
int var_8 = 1562869209;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)17455;
unsigned short var_11 = (unsigned short)62201;
signed char var_12 = (signed char)2;
unsigned char var_13 = (unsigned char)57;
unsigned short var_16 = (unsigned short)13179;
int zero = 0;
unsigned short var_19 = (unsigned short)50163;
unsigned char var_20 = (unsigned char)154;
unsigned short var_21 = (unsigned short)21341;
unsigned short var_22 = (unsigned short)28606;
long long int var_23 = 5749819327857163899LL;
unsigned short arr_0 [13] ;
long long int arr_1 [13] [13] ;
long long int arr_2 [13] [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)50345;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -473988412572530879LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 3650624188874248170LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 895583280;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
