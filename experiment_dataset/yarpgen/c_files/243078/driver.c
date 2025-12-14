#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4022527361404680057ULL;
unsigned char var_4 = (unsigned char)167;
signed char var_9 = (signed char)-30;
short var_12 = (short)-31290;
short var_15 = (short)1283;
unsigned long long int var_17 = 885770637695078506ULL;
int zero = 0;
unsigned long long int var_18 = 10145628846033280347ULL;
signed char var_19 = (signed char)-110;
short var_20 = (short)-32338;
unsigned long long int var_21 = 16226339860879223821ULL;
unsigned int var_22 = 1910791258U;
signed char arr_1 [17] ;
unsigned char arr_9 [22] [22] ;
unsigned int arr_10 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 4294640333U;
}

void checksum() {
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
