#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12047389694631722049ULL;
int var_3 = 1203362394;
short var_5 = (short)24571;
unsigned long long int var_6 = 5802467364942912397ULL;
short var_9 = (short)15810;
short var_10 = (short)17148;
signed char var_12 = (signed char)-108;
short var_13 = (short)31163;
int zero = 0;
unsigned long long int var_17 = 14133092340505789880ULL;
unsigned short var_18 = (unsigned short)32059;
unsigned short var_19 = (unsigned short)1052;
unsigned int var_20 = 2313853925U;
long long int var_21 = 3132447751809061339LL;
signed char var_22 = (signed char)-62;
int var_23 = -1203464940;
unsigned long long int var_24 = 12566503248705117603ULL;
signed char arr_0 [16] ;
signed char arr_1 [16] ;
signed char arr_2 [16] ;
unsigned short arr_3 [16] ;
unsigned long long int arr_5 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-30;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)26904;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 3404186725817689590ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
