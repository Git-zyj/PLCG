#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
long long int var_1 = -4752204818017911036LL;
signed char var_2 = (signed char)40;
int var_5 = 1685667166;
int var_6 = -415656123;
unsigned int var_8 = 1523496978U;
unsigned short var_9 = (unsigned short)8268;
long long int var_10 = 6913581153832077281LL;
long long int var_11 = 7296724888796694406LL;
long long int var_13 = -2180659462737166142LL;
int zero = 0;
unsigned int var_14 = 3176487185U;
unsigned long long int var_15 = 7717890532546459364ULL;
long long int var_16 = -4307798149183421939LL;
unsigned long long int var_17 = 3063111040025497558ULL;
unsigned short arr_0 [19] ;
long long int arr_2 [19] [19] ;
long long int arr_3 [19] [19] ;
long long int arr_6 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)8251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = -1176495701383090084LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -6317307501465121414LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 3508623216824426740LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
