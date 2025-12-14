#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned long long int var_3 = 3173043959447263592ULL;
unsigned int var_4 = 2520120470U;
unsigned long long int var_6 = 8054070169017942623ULL;
long long int var_7 = 4872881230542882725LL;
unsigned short var_9 = (unsigned short)9409;
long long int var_11 = 5160133006899299263LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)57742;
int zero = 0;
short var_16 = (short)31946;
unsigned char var_17 = (unsigned char)27;
signed char var_18 = (signed char)-78;
short var_19 = (short)11300;
unsigned short var_20 = (unsigned short)24516;
long long int arr_0 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
short arr_8 [14] [14] [14] [14] ;
long long int arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = -3935106722975560289LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)32415;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 9834278650092204732ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-27381 : (short)-14698;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1378057553787687874LL : -4012573951775102267LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
