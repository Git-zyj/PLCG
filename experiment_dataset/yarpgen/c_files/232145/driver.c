#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)2;
signed char var_2 = (signed char)106;
unsigned long long int var_3 = 1894665343027593043ULL;
unsigned short var_5 = (unsigned short)11924;
unsigned char var_6 = (unsigned char)30;
signed char var_7 = (signed char)-47;
int var_8 = -1721828474;
long long int var_9 = -424198601298826657LL;
signed char var_10 = (signed char)-4;
int zero = 0;
signed char var_11 = (signed char)85;
long long int var_12 = -8501550560142634308LL;
unsigned char var_13 = (unsigned char)212;
long long int var_14 = 7835213102888853206LL;
long long int var_15 = -1679462318742202518LL;
unsigned long long int var_16 = 15459629970950475435ULL;
unsigned short var_17 = (unsigned short)10791;
long long int var_18 = -3339111082232422845LL;
unsigned short var_19 = (unsigned short)12173;
long long int arr_4 [13] ;
unsigned short arr_6 [19] ;
long long int arr_7 [19] ;
unsigned int arr_15 [19] [19] ;
short arr_8 [19] ;
unsigned int arr_9 [19] ;
signed char arr_13 [19] ;
unsigned int arr_16 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -5820063791695071147LL : 3090417989851206150LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)54764;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -6247665820641422327LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = 3550439912U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (short)13304;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 3472376260U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = 3541542690U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
