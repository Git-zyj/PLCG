#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)101;
unsigned char var_4 = (unsigned char)74;
unsigned short var_6 = (unsigned short)58424;
signed char var_7 = (signed char)-48;
unsigned char var_10 = (unsigned char)74;
signed char var_11 = (signed char)35;
signed char var_12 = (signed char)-57;
signed char var_15 = (signed char)26;
unsigned char var_16 = (unsigned char)144;
signed char var_17 = (signed char)-108;
unsigned short var_18 = (unsigned short)9090;
int zero = 0;
signed char var_19 = (signed char)-41;
unsigned char var_20 = (unsigned char)165;
signed char var_21 = (signed char)-114;
signed char var_22 = (signed char)-103;
unsigned char var_23 = (unsigned char)12;
signed char var_24 = (signed char)-78;
unsigned char var_25 = (unsigned char)238;
signed char var_26 = (signed char)-82;
signed char arr_3 [25] ;
signed char arr_4 [25] [25] ;
unsigned short arr_7 [17] ;
signed char arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)15271;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-6 : (signed char)63;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
