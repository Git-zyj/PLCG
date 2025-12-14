#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)132;
long long int var_4 = 2307130863637546760LL;
unsigned int var_6 = 2571694260U;
long long int var_12 = -8018110946533340407LL;
int zero = 0;
long long int var_16 = -7886346594881321622LL;
long long int var_17 = 4898613190297933542LL;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)89;
unsigned int var_20 = 1298799279U;
unsigned short var_21 = (unsigned short)34701;
unsigned char arr_1 [18] [18] ;
unsigned int arr_3 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3461346537U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
