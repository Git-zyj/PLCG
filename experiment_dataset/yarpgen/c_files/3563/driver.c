#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)40;
unsigned char var_1 = (unsigned char)198;
signed char var_3 = (signed char)-1;
unsigned int var_4 = 4051851528U;
short var_5 = (short)-21776;
short var_7 = (short)-32063;
unsigned long long int var_9 = 15562427316582643353ULL;
int zero = 0;
unsigned long long int var_10 = 14564636099594327653ULL;
signed char var_11 = (signed char)7;
signed char var_12 = (signed char)56;
unsigned short var_13 = (unsigned short)7398;
signed char var_14 = (signed char)43;
unsigned char var_15 = (unsigned char)238;
unsigned int var_16 = 1518624498U;
long long int var_17 = 3118318794919788003LL;
unsigned char var_18 = (unsigned char)194;
short arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
unsigned char arr_2 [10] ;
signed char arr_3 [10] ;
long long int arr_4 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1261;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 5097178423110774056ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2394062794008917447LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
