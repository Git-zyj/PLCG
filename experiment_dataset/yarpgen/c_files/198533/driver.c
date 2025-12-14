#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)64;
unsigned int var_7 = 109531752U;
unsigned long long int var_10 = 16431467583723877129ULL;
unsigned long long int var_12 = 1052079738857001076ULL;
unsigned long long int var_13 = 210918122700992481ULL;
int zero = 0;
signed char var_14 = (signed char)-124;
int var_15 = -463076276;
short var_16 = (short)32363;
unsigned long long int var_17 = 8034953838249422997ULL;
unsigned long long int var_18 = 4588236289884920188ULL;
int arr_3 [23] [23] ;
int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -1107452404;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 916062756;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
