#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
signed char var_1 = (signed char)-125;
int var_2 = -982824308;
unsigned long long int var_3 = 5493737838095097467ULL;
unsigned short var_4 = (unsigned short)49645;
signed char var_5 = (signed char)70;
unsigned long long int var_6 = 14439584003877014327ULL;
unsigned long long int var_8 = 6349241442412688272ULL;
long long int var_11 = -1110374564970808541LL;
signed char var_12 = (signed char)-124;
int zero = 0;
unsigned long long int var_15 = 13599965715013696005ULL;
long long int var_16 = 5638350630567658913LL;
signed char var_17 = (signed char)-81;
signed char var_18 = (signed char)-5;
unsigned short var_19 = (unsigned short)20251;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
long long int arr_2 [21] ;
short arr_3 [21] [21] ;
signed char arr_5 [21] [21] [21] [21] ;
short arr_7 [21] [21] [21] [21] ;
signed char arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -1852437190481939575LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-19655;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-24617 : (short)170;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-24 : (signed char)-15;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
