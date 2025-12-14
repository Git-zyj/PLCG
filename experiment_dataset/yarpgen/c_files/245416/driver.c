#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5059504789575669329ULL;
unsigned char var_2 = (unsigned char)30;
signed char var_3 = (signed char)-90;
unsigned short var_5 = (unsigned short)27848;
int var_6 = 276103392;
unsigned long long int var_7 = 2936501280558169969ULL;
unsigned long long int var_9 = 12627962621571335035ULL;
int zero = 0;
int var_10 = -1475521339;
unsigned int var_11 = 2368736714U;
unsigned long long int var_12 = 12038490260686129316ULL;
unsigned char var_13 = (unsigned char)82;
signed char var_14 = (signed char)94;
int var_15 = 1463054675;
signed char arr_0 [16] ;
unsigned int arr_2 [16] [16] ;
unsigned char arr_6 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 2603891148U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned char)251;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
