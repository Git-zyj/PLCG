#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3985648169409655832ULL;
int var_4 = -2017215424;
long long int var_5 = -5543592096106100679LL;
unsigned long long int var_6 = 12185225200456478768ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)131;
signed char var_11 = (signed char)91;
unsigned long long int var_12 = 1343862464988425209ULL;
unsigned char var_13 = (unsigned char)248;
unsigned long long int var_14 = 4628797601234886403ULL;
unsigned long long int var_15 = 8469349096975339696ULL;
unsigned long long int var_16 = 9185675274751959281ULL;
signed char var_17 = (signed char)113;
unsigned char var_18 = (unsigned char)15;
signed char var_19 = (signed char)17;
int arr_2 [14] [14] ;
signed char arr_6 [14] ;
signed char arr_7 [14] [14] [14] ;
unsigned long long int arr_11 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = -303671262;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 8743357543667556320ULL;
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
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
