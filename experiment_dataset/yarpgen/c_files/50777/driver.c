#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3654150227U;
unsigned int var_2 = 395541818U;
_Bool var_3 = (_Bool)1;
signed char var_5 = (signed char)17;
int var_7 = -1173210422;
unsigned char var_8 = (unsigned char)129;
unsigned int var_9 = 3568477515U;
int var_10 = 2051964706;
int var_11 = -1306613573;
signed char var_16 = (signed char)-87;
int zero = 0;
short var_17 = (short)-17107;
long long int var_18 = -8026523989523683666LL;
long long int var_19 = 5540274808959890123LL;
int arr_1 [13] [13] ;
unsigned short arr_4 [13] ;
unsigned int arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -451619031;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)40164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 188221806U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
