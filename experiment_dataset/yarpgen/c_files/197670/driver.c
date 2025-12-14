#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12943912694445345740ULL;
unsigned short var_1 = (unsigned short)36268;
unsigned int var_2 = 2531721233U;
unsigned char var_4 = (unsigned char)123;
unsigned short var_5 = (unsigned short)9120;
unsigned char var_7 = (unsigned char)47;
unsigned char var_8 = (unsigned char)51;
int var_9 = 1291718964;
signed char var_10 = (signed char)66;
unsigned long long int var_11 = 12817916329986769316ULL;
signed char var_12 = (signed char)-83;
int zero = 0;
unsigned char var_13 = (unsigned char)65;
unsigned long long int var_14 = 16005841477669713611ULL;
signed char var_15 = (signed char)24;
signed char var_16 = (signed char)-125;
unsigned long long int var_17 = 8257755675959780742ULL;
unsigned short var_18 = (unsigned short)6446;
unsigned int arr_0 [10] ;
long long int arr_1 [10] [10] ;
int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 2755701346U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 7213103354458359074LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -32098860;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
