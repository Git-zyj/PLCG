#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27124;
signed char var_4 = (signed char)83;
long long int var_6 = -1765035060920663563LL;
unsigned char var_7 = (unsigned char)193;
int zero = 0;
signed char var_17 = (signed char)-80;
unsigned int var_18 = 3583737277U;
long long int var_19 = 7366372192954696800LL;
unsigned int var_20 = 1027576344U;
unsigned int arr_0 [18] ;
unsigned int arr_5 [18] [18] [18] ;
unsigned short arr_8 [18] [18] [18] [18] ;
unsigned int arr_9 [18] [18] [18] [18] [18] [18] [18] ;
short arr_12 [18] [18] ;
signed char arr_13 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 832401606U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 527941851U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)61776 : (unsigned short)22075;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 954073840U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-13390 : (short)-8492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)-23;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
