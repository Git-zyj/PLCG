#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)144;
int var_5 = 978206049;
unsigned short var_6 = (unsigned short)18578;
unsigned long long int var_9 = 11142648708427608226ULL;
long long int var_11 = 8460457233814580153LL;
signed char var_12 = (signed char)58;
short var_14 = (short)-27236;
unsigned long long int var_16 = 14139424879768519563ULL;
int zero = 0;
long long int var_17 = 2014147166181986257LL;
unsigned char var_18 = (unsigned char)152;
unsigned short var_19 = (unsigned short)48284;
short var_20 = (short)11431;
signed char var_21 = (signed char)110;
short var_22 = (short)-11448;
long long int var_23 = 5489647698238043067LL;
unsigned short var_24 = (unsigned short)50256;
unsigned char var_25 = (unsigned char)5;
unsigned char arr_9 [17] ;
unsigned long long int arr_10 [17] ;
unsigned short arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = 14389497874672823338ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)11373;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
