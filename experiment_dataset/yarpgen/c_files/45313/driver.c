#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11832104994515757661ULL;
unsigned short var_6 = (unsigned short)17667;
unsigned short var_7 = (unsigned short)40199;
unsigned long long int var_9 = 9531301181741955203ULL;
unsigned short var_12 = (unsigned short)21203;
unsigned short var_13 = (unsigned short)17032;
unsigned short var_15 = (unsigned short)40757;
int zero = 0;
unsigned long long int var_18 = 10491700598406246002ULL;
unsigned long long int var_19 = 1629137187877526035ULL;
unsigned long long int var_20 = 13437554695590036486ULL;
unsigned short arr_1 [10] ;
unsigned long long int arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)33272;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 11238167730851041849ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)22700;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
