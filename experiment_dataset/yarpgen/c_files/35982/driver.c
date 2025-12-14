#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4281000146U;
unsigned char var_3 = (unsigned char)113;
short var_4 = (short)4371;
long long int var_5 = -3341205062993516590LL;
short var_7 = (short)27637;
unsigned char var_8 = (unsigned char)242;
signed char var_9 = (signed char)61;
short var_10 = (short)2501;
int zero = 0;
int var_11 = 1578169319;
unsigned short var_12 = (unsigned short)5744;
unsigned char var_13 = (unsigned char)140;
unsigned long long int var_14 = 10103434080487403141ULL;
short var_15 = (short)-5693;
unsigned long long int var_16 = 14251414644945814108ULL;
int arr_0 [24] ;
unsigned char arr_4 [24] [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
short arr_6 [24] ;
unsigned char arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2059730201;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8458774648711528072ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)21403;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)49;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
