#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
long long int var_2 = 1710967969743286077LL;
long long int var_5 = -8887886700722855135LL;
unsigned long long int var_6 = 15970758270286421552ULL;
unsigned long long int var_7 = 7535872289767526068ULL;
unsigned char var_9 = (unsigned char)14;
signed char var_10 = (signed char)96;
unsigned short var_12 = (unsigned short)44188;
signed char var_13 = (signed char)2;
unsigned int var_17 = 104648145U;
int zero = 0;
short var_18 = (short)3784;
unsigned long long int var_19 = 16704449418851639517ULL;
unsigned short var_20 = (unsigned short)52241;
unsigned long long int var_21 = 2973082668887480164ULL;
int var_22 = 1902095846;
unsigned long long int var_23 = 17992227121254804053ULL;
unsigned int arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] ;
unsigned long long int arr_4 [12] [12] ;
signed char arr_5 [12] [12] [12] ;
unsigned short arr_6 [12] [12] [12] [12] ;
long long int arr_8 [12] [12] ;
unsigned char arr_9 [12] ;
short arr_10 [12] [12] [12] [12] [12] [12] ;
unsigned long long int arr_11 [12] [12] ;
unsigned long long int arr_12 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 1675567957U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)48720;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 17659541670752425099ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-16;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)8993;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = -2805164759319133494LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)123 : (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (short)29477 : (short)4789;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 4477223739580047701ULL : 3267897321801994223ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 6591822295520639435ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
