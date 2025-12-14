#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-114;
unsigned char var_2 = (unsigned char)34;
int var_3 = 1879959586;
long long int var_4 = -2357101623712740809LL;
long long int var_5 = 4463835240384495044LL;
unsigned long long int var_6 = 3723104263897699505ULL;
unsigned long long int var_7 = 7649639207598657340ULL;
unsigned long long int var_8 = 5593296286779847934ULL;
unsigned char var_11 = (unsigned char)69;
unsigned char var_12 = (unsigned char)178;
signed char var_13 = (signed char)60;
int zero = 0;
unsigned long long int var_15 = 15159605450476196092ULL;
int var_16 = 1735907964;
int var_17 = -1685701016;
long long int var_18 = 8342718836065839270LL;
signed char var_19 = (signed char)-83;
signed char var_20 = (signed char)-125;
unsigned long long int var_21 = 690545761103955010ULL;
unsigned long long int var_22 = 7113315582718243597ULL;
unsigned long long int var_23 = 3902451590954081432ULL;
short arr_0 [20] ;
unsigned long long int arr_2 [20] [20] [20] ;
unsigned long long int arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-31723;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 14193240720527701758ULL : 1434838019330213994ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 6367013584949303088ULL;
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
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
