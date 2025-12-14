#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22202;
short var_3 = (short)31021;
int var_7 = 1213931525;
short var_8 = (short)1681;
unsigned short var_10 = (unsigned short)40842;
int var_11 = -1573665354;
unsigned long long int var_17 = 4148082255525196560ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)10256;
unsigned char var_19 = (unsigned char)95;
signed char var_20 = (signed char)-67;
signed char var_21 = (signed char)93;
signed char var_22 = (signed char)-69;
int var_23 = 376540071;
unsigned short var_24 = (unsigned short)29172;
long long int var_25 = -8767904284586898220LL;
int var_26 = -622403372;
unsigned short var_27 = (unsigned short)6434;
int arr_1 [24] [24] ;
int arr_5 [24] [24] [24] ;
int arr_8 [24] [24] ;
unsigned long long int arr_13 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 1658493057;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 344623117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -53323949;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = 8291547508701948312ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
