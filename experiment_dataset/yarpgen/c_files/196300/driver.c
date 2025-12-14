#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1823207401U;
short var_1 = (short)13462;
signed char var_2 = (signed char)-46;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3920236767U;
unsigned char var_6 = (unsigned char)36;
unsigned short var_7 = (unsigned short)37730;
unsigned int var_8 = 2260861069U;
signed char var_9 = (signed char)-124;
unsigned int var_11 = 658016001U;
int zero = 0;
unsigned short var_12 = (unsigned short)29888;
_Bool var_13 = (_Bool)0;
short var_14 = (short)24576;
long long int var_15 = 1552923014726442943LL;
unsigned int var_16 = 504373128U;
unsigned char var_17 = (unsigned char)188;
unsigned long long int var_18 = 5132554735930586899ULL;
int var_19 = -2024002595;
unsigned short var_20 = (unsigned short)50004;
long long int var_21 = -2859892008945246288LL;
unsigned short arr_2 [22] [22] [22] ;
unsigned char arr_3 [22] [22] ;
long long int arr_5 [22] [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
int arr_11 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned short)43883;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 890591099138968173LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 10735548324621154274ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = -155690061;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
