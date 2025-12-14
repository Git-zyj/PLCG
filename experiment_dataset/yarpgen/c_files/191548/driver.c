#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6010;
short var_1 = (short)-23948;
unsigned short var_2 = (unsigned short)56301;
short var_3 = (short)-24105;
short var_5 = (short)-10530;
unsigned short var_6 = (unsigned short)18966;
long long int var_7 = 4912926638235188716LL;
short var_8 = (short)25146;
unsigned short var_9 = (unsigned short)32001;
long long int var_11 = -8456061426084409592LL;
unsigned short var_13 = (unsigned short)5201;
unsigned char var_14 = (unsigned char)57;
unsigned short var_15 = (unsigned short)26740;
unsigned short var_16 = (unsigned short)2785;
long long int var_17 = 7190546244267840470LL;
unsigned int var_18 = 542736654U;
int zero = 0;
unsigned int var_19 = 2489123994U;
unsigned int var_20 = 1633697017U;
unsigned long long int var_21 = 15371823220070672406ULL;
long long int var_22 = -5499360814386939276LL;
unsigned int var_23 = 3088338626U;
unsigned short var_24 = (unsigned short)61080;
short arr_8 [18] [18] [18] ;
unsigned long long int arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-6328;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = 7387585020679526923ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
