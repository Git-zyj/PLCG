#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 997777868;
short var_4 = (short)27063;
short var_5 = (short)19782;
short var_6 = (short)32514;
unsigned short var_7 = (unsigned short)3640;
short var_8 = (short)22771;
int var_9 = 1695478707;
short var_10 = (short)-6576;
unsigned short var_11 = (unsigned short)61342;
unsigned short var_12 = (unsigned short)32580;
int zero = 0;
unsigned short var_13 = (unsigned short)32146;
short var_14 = (short)15967;
unsigned short var_15 = (unsigned short)39684;
int arr_0 [24] ;
short arr_2 [24] ;
short arr_4 [24] [24] [24] ;
unsigned short arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 208642799;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-3554;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-29515;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)40320;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
