#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
unsigned short var_1 = (unsigned short)36680;
unsigned int var_4 = 1563224450U;
signed char var_5 = (signed char)-42;
int var_6 = -557322871;
long long int var_8 = -6123117341177811104LL;
long long int var_11 = -5492933967944692992LL;
unsigned int var_13 = 3316324897U;
signed char var_15 = (signed char)61;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -1940486550409179446LL;
unsigned int var_18 = 3561848965U;
long long int var_19 = -1593912513559722281LL;
signed char var_20 = (signed char)-116;
unsigned long long int var_21 = 14161468546140267872ULL;
unsigned char var_22 = (unsigned char)227;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)236;
int arr_1 [17] [17] ;
unsigned char arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1358977387;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)234;
}

void checksum() {
    hash(&seed, var_16);
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
