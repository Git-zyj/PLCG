#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5013562307856593911LL;
unsigned long long int var_3 = 5979599325023588109ULL;
short var_4 = (short)-4361;
long long int var_5 = -4113578927186261776LL;
unsigned long long int var_6 = 2974218234986535485ULL;
unsigned long long int var_7 = 15593553782332431712ULL;
long long int var_9 = -1802110616250381705LL;
signed char var_10 = (signed char)57;
long long int var_12 = 1751025445802457826LL;
long long int var_13 = 7554209685040727938LL;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
unsigned char var_16 = (unsigned char)170;
signed char var_17 = (signed char)117;
unsigned char var_18 = (unsigned char)225;
long long int var_19 = -740717896226745872LL;
unsigned short arr_6 [24] ;
short arr_7 [24] [24] [24] ;
signed char arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)33295;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)22615;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (signed char)65;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
