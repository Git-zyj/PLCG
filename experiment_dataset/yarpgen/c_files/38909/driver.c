#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17716517873072374384ULL;
short var_2 = (short)-14644;
unsigned short var_4 = (unsigned short)2439;
unsigned short var_5 = (unsigned short)27463;
unsigned char var_6 = (unsigned char)251;
long long int var_9 = -688690583555849984LL;
int zero = 0;
unsigned char var_15 = (unsigned char)68;
long long int var_16 = 1020646447207566749LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 543883779U;
unsigned short arr_6 [14] [14] [14] ;
long long int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)43754 : (unsigned short)42032;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 9157346481862861644LL : 3329788059216808612LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
