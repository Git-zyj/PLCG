#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1835942662;
unsigned short var_1 = (unsigned short)43681;
unsigned int var_2 = 4003808628U;
unsigned char var_3 = (unsigned char)95;
int var_4 = -441170090;
long long int var_5 = 5991221315654573156LL;
unsigned char var_7 = (unsigned char)11;
int var_8 = -506018192;
unsigned short var_9 = (unsigned short)61146;
signed char var_11 = (signed char)-4;
signed char var_12 = (signed char)-17;
int var_13 = 2068841617;
unsigned long long int var_14 = 14772085073094935155ULL;
int zero = 0;
int var_15 = -1365500308;
unsigned char var_16 = (unsigned char)78;
signed char var_17 = (signed char)55;
unsigned char var_18 = (unsigned char)35;
signed char var_19 = (signed char)-101;
unsigned char var_20 = (unsigned char)3;
unsigned int var_21 = 3096055537U;
signed char var_22 = (signed char)104;
unsigned short arr_0 [20] ;
short arr_1 [20] ;
_Bool arr_3 [22] ;
_Bool arr_4 [22] [22] [22] ;
int arr_6 [22] ;
int arr_7 [22] [22] [22] ;
_Bool arr_8 [22] [22] [22] [22] ;
unsigned short arr_9 [22] [22] [22] [22] ;
short arr_10 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned short)41094;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)-2194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1626155125;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1307640033;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)32848;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-7936;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
