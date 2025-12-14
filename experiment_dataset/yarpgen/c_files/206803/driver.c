#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6162644361710840057LL;
long long int var_4 = -8739424420576533748LL;
signed char var_12 = (signed char)96;
_Bool var_14 = (_Bool)0;
long long int var_16 = -2024244484793413362LL;
int zero = 0;
unsigned short var_18 = (unsigned short)26749;
long long int var_19 = -2308690969693645261LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 2594413841193226059LL;
signed char var_22 = (signed char)103;
short var_23 = (short)-8340;
long long int var_24 = 725134687988518468LL;
unsigned short var_25 = (unsigned short)23932;
signed char arr_0 [25] [25] ;
unsigned int arr_1 [25] ;
signed char arr_2 [13] ;
short arr_3 [13] ;
unsigned long long int arr_7 [13] [13] [13] [13] ;
unsigned long long int arr_8 [13] [13] ;
signed char arr_9 [13] ;
signed char arr_10 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1759489397U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-4051;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 637738801603238407ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 17130432549801607911ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)5 : (signed char)-2;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
