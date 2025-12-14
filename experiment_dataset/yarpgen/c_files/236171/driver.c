#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6097015679340058857ULL;
unsigned long long int var_7 = 13131537858359629312ULL;
unsigned short var_9 = (unsigned short)227;
unsigned long long int var_14 = 11838948387037346488ULL;
unsigned long long int var_15 = 15034964764191983828ULL;
unsigned int var_16 = 1886918526U;
unsigned int var_17 = 3880540781U;
int zero = 0;
unsigned short var_19 = (unsigned short)22922;
signed char var_20 = (signed char)-53;
unsigned char var_21 = (unsigned char)137;
int var_22 = 2098066269;
int arr_0 [24] ;
unsigned short arr_1 [24] ;
long long int arr_3 [24] [24] [24] ;
unsigned int arr_4 [24] ;
unsigned char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2104510987;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)59214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4333144066569210342LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 710697218U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)19;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
