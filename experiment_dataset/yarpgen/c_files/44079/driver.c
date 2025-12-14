#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-108;
signed char var_2 = (signed char)-95;
short var_3 = (short)-2203;
signed char var_4 = (signed char)71;
signed char var_5 = (signed char)57;
signed char var_8 = (signed char)51;
signed char var_9 = (signed char)123;
long long int var_11 = 4946410996964645027LL;
signed char var_12 = (signed char)7;
signed char var_15 = (signed char)-96;
int zero = 0;
signed char var_16 = (signed char)18;
signed char var_17 = (signed char)-97;
signed char var_18 = (signed char)-39;
signed char var_19 = (signed char)77;
int var_20 = 1467375003;
long long int var_21 = 7815493376792332413LL;
signed char var_22 = (signed char)-53;
short arr_1 [17] ;
signed char arr_2 [24] [24] ;
unsigned char arr_3 [24] [24] ;
short arr_4 [24] ;
unsigned char arr_5 [24] ;
signed char arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)22209;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-4343;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (signed char)-118;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
