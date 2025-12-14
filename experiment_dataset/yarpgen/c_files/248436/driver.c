#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3582114118U;
unsigned short var_5 = (unsigned short)17991;
unsigned int var_6 = 2898897904U;
long long int var_7 = 5350165464574391408LL;
long long int var_8 = -8489847021956450675LL;
unsigned long long int var_9 = 5084611646545361516ULL;
unsigned short var_10 = (unsigned short)52447;
short var_13 = (short)15898;
int zero = 0;
long long int var_17 = -7413795082841488916LL;
unsigned long long int var_18 = 88372353412028716ULL;
short var_19 = (short)-5762;
_Bool var_20 = (_Bool)1;
long long int var_21 = -7255901669098750352LL;
unsigned short var_22 = (unsigned short)19162;
unsigned short arr_0 [14] ;
unsigned short arr_3 [14] [14] [14] ;
int arr_4 [14] [14] ;
unsigned char arr_5 [14] [14] ;
int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)41808;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)63105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 2031583362;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 395761758;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
