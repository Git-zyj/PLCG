#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 750361706;
int var_3 = -1355774066;
unsigned long long int var_6 = 12850469891815831532ULL;
signed char var_8 = (signed char)-97;
unsigned short var_9 = (unsigned short)36313;
int var_10 = 601589728;
signed char var_13 = (signed char)24;
int zero = 0;
unsigned long long int var_15 = 2259529292073891849ULL;
long long int var_16 = 761803374965823481LL;
long long int var_17 = -2324820407530137508LL;
unsigned char var_18 = (unsigned char)71;
unsigned short var_19 = (unsigned short)12249;
unsigned char var_20 = (unsigned char)143;
signed char var_21 = (signed char)-69;
unsigned short var_22 = (unsigned short)5388;
unsigned short arr_0 [25] ;
signed char arr_1 [25] ;
unsigned int arr_2 [25] [25] [25] ;
short arr_3 [25] [25] ;
int arr_4 [25] [25] ;
_Bool arr_5 [25] [25] ;
unsigned int arr_6 [25] [25] [25] [25] ;
long long int arr_7 [25] [25] ;
unsigned int arr_8 [25] [25] [25] ;
unsigned int arr_9 [25] [25] ;
unsigned short arr_11 [25] [25] [25] [25] ;
long long int arr_13 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)9218 : (unsigned short)60673;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)95;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1568277950U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-10440;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = -2116907273;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3606259639U : 1489080775U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -8843721675888252278LL : 5435004996596295320LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 2931388282U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 3741555101U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)48688 : (unsigned short)32200;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_13 [i_0] = 8807128250971695300LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
