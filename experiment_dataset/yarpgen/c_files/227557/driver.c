#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2129116533U;
unsigned char var_2 = (unsigned char)154;
unsigned int var_3 = 2401139136U;
unsigned char var_5 = (unsigned char)202;
unsigned char var_8 = (unsigned char)199;
unsigned int var_9 = 1055170673U;
unsigned char var_12 = (unsigned char)134;
unsigned char var_14 = (unsigned char)208;
int zero = 0;
unsigned int var_15 = 830401869U;
unsigned char var_16 = (unsigned char)94;
unsigned long long int var_17 = 14215129823462563469ULL;
signed char var_18 = (signed char)33;
unsigned char var_19 = (unsigned char)109;
unsigned long long int arr_2 [22] ;
unsigned int arr_5 [22] ;
unsigned char arr_6 [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] [22] ;
unsigned long long int arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3440196403616672175ULL : 11421836126643491091ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = 2663049658U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)173 : (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 14556516857068728355ULL : 2393933474622559047ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 56686770841922507ULL : 4859694435959051292ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
