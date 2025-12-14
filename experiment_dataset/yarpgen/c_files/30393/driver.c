#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 994150166;
unsigned char var_2 = (unsigned char)39;
unsigned short var_4 = (unsigned short)4560;
unsigned char var_5 = (unsigned char)244;
unsigned long long int var_7 = 17055079122082329089ULL;
int var_8 = 1542930617;
signed char var_10 = (signed char)-122;
short var_11 = (short)30138;
int zero = 0;
unsigned int var_12 = 1141766570U;
unsigned short var_13 = (unsigned short)25238;
unsigned char var_14 = (unsigned char)241;
int var_15 = -2103884475;
signed char var_16 = (signed char)-31;
short var_17 = (short)17733;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_2 [17] [17] ;
short arr_3 [17] ;
short arr_6 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 14545654045554596285ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 346747327931908024ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)32312;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)8898;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
