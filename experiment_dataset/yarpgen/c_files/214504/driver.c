#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 233499577105929788LL;
unsigned char var_1 = (unsigned char)244;
signed char var_4 = (signed char)94;
unsigned int var_6 = 4162618993U;
unsigned long long int var_7 = 7020588748387187848ULL;
unsigned int var_8 = 1806971520U;
signed char var_9 = (signed char)-46;
int zero = 0;
long long int var_10 = 1536968126967464563LL;
int var_11 = 661815685;
unsigned short var_12 = (unsigned short)41077;
signed char var_13 = (signed char)-49;
int var_14 = -947230476;
unsigned int var_15 = 3858522967U;
unsigned int arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned short arr_3 [17] ;
int arr_4 [17] ;
signed char arr_5 [17] [17] [17] ;
unsigned short arr_6 [17] [17] [17] [17] ;
signed char arr_7 [11] ;
unsigned int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2531521786U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1126821372U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)19895;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 1359048622;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-14 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27443;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 1544797328U;
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
