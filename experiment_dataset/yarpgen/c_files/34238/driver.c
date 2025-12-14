#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
short var_1 = (short)31063;
unsigned long long int var_3 = 425144711380781640ULL;
unsigned short var_4 = (unsigned short)6769;
unsigned long long int var_5 = 8592232819088879092ULL;
short var_6 = (short)-28706;
short var_7 = (short)-6222;
short var_8 = (short)29775;
unsigned short var_10 = (unsigned short)2679;
unsigned long long int var_11 = 17695833693275897490ULL;
int zero = 0;
unsigned long long int var_12 = 6480375838857564704ULL;
unsigned short var_13 = (unsigned short)25691;
short var_14 = (short)7261;
signed char var_15 = (signed char)-64;
short arr_1 [16] [16] ;
short arr_2 [16] ;
short arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-5284;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-25025;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)2878;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
