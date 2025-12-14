#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40023;
unsigned short var_1 = (unsigned short)14504;
signed char var_2 = (signed char)8;
unsigned int var_3 = 1936641241U;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)30111;
unsigned int var_6 = 2622651919U;
unsigned short var_7 = (unsigned short)15590;
unsigned short var_8 = (unsigned short)27895;
long long int var_9 = 4573870953326235362LL;
signed char var_10 = (signed char)-56;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5205812288571477451LL;
signed char var_13 = (signed char)113;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1877735717U;
unsigned short var_16 = (unsigned short)19487;
unsigned int var_17 = 795052381U;
long long int var_18 = -8681871606084335790LL;
signed char var_19 = (signed char)64;
unsigned short var_20 = (unsigned short)12700;
long long int var_21 = 1757289807642558031LL;
short var_22 = (short)2164;
signed char var_23 = (signed char)-116;
unsigned int var_24 = 3959511981U;
unsigned int var_25 = 3542712565U;
signed char var_26 = (signed char)86;
unsigned int var_27 = 2837263275U;
_Bool var_28 = (_Bool)1;
long long int var_29 = -4475361161723918219LL;
unsigned long long int var_30 = 2859799429866454901ULL;
unsigned int arr_1 [17] [17] ;
signed char arr_2 [17] ;
signed char arr_4 [17] [17] [17] [17] ;
unsigned short arr_6 [17] ;
_Bool arr_9 [17] [17] ;
long long int arr_10 [17] [17] [17] [17] [17] [17] ;
signed char arr_11 [17] [17] [17] [17] [17] ;
int arr_15 [17] [17] ;
signed char arr_16 [17] ;
signed char arr_24 [25] ;
unsigned int arr_25 [25] ;
short arr_12 [17] [17] [17] ;
unsigned int arr_23 [17] [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 2196357732U : 217916581U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)124 : (signed char)-58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-111 : (signed char)43;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)28851;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1025685117610321195LL : -8173540004498147611LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 1236393188;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_25 [i_0] = 2159392989U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)511 : (short)15801;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 965979512U : 2959559140U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
