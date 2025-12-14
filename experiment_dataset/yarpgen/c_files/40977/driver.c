#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1938718785;
long long int var_1 = 1676552204186314203LL;
long long int var_2 = -711686612162730436LL;
unsigned char var_3 = (unsigned char)251;
unsigned char var_4 = (unsigned char)121;
long long int var_5 = 2523781192088727992LL;
unsigned char var_6 = (unsigned char)158;
unsigned char var_8 = (unsigned char)91;
unsigned char var_9 = (unsigned char)123;
unsigned char var_10 = (unsigned char)255;
int var_11 = 961428214;
unsigned int var_12 = 1332251085U;
int zero = 0;
unsigned long long int var_13 = 738492433599677780ULL;
unsigned long long int var_14 = 15376862244738281193ULL;
unsigned char var_15 = (unsigned char)95;
unsigned int var_16 = 810313420U;
unsigned long long int var_17 = 14000602428169939562ULL;
long long int arr_15 [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -4336473802109129254LL : 2116225718440882283LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
