#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4130036849U;
unsigned char var_1 = (unsigned char)117;
long long int var_2 = 6777441167148138258LL;
unsigned long long int var_5 = 5593356627502640321ULL;
unsigned char var_8 = (unsigned char)244;
long long int var_9 = -8457002078663942203LL;
unsigned int var_10 = 2663710765U;
signed char var_11 = (signed char)110;
long long int var_12 = -9068354247756231783LL;
int var_13 = 1509571228;
long long int var_15 = -5555647763697333345LL;
int zero = 0;
unsigned int var_20 = 601887367U;
short var_21 = (short)-17926;
long long int var_22 = -8678669695731854530LL;
unsigned short arr_1 [21] ;
unsigned char arr_2 [21] ;
unsigned char arr_3 [21] ;
long long int arr_4 [21] [21] ;
unsigned char arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)59256;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -7441765524623012840LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned char)209;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
