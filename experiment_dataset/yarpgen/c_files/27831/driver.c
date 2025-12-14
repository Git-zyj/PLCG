#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 709156901U;
unsigned long long int var_3 = 15128520499227202508ULL;
unsigned long long int var_5 = 6852173614098663259ULL;
unsigned long long int var_7 = 7422932250009305674ULL;
unsigned char var_8 = (unsigned char)206;
unsigned int var_9 = 3201230575U;
unsigned int var_10 = 2333729655U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)46;
unsigned int var_13 = 4058964576U;
unsigned char var_14 = (unsigned char)102;
int zero = 0;
long long int var_15 = -6703912623260377847LL;
unsigned long long int var_16 = 5071147883661713152ULL;
long long int var_17 = -95556050538270748LL;
long long int var_18 = -4952203522562937148LL;
unsigned long long int var_19 = 7552555520884001201ULL;
unsigned char var_20 = (unsigned char)195;
long long int var_21 = 4107377458152041576LL;
unsigned int var_22 = 3267689461U;
_Bool var_23 = (_Bool)0;
int var_24 = -866299768;
unsigned char var_25 = (unsigned char)188;
int arr_0 [18] ;
unsigned int arr_1 [18] ;
unsigned char arr_3 [18] [18] ;
_Bool arr_8 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 1940243885;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 1657856765U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
