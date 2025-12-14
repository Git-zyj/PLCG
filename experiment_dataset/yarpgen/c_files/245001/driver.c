#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2902281209U;
unsigned long long int var_2 = 12701229468436480828ULL;
unsigned int var_3 = 1151783656U;
long long int var_4 = -5505791254854693015LL;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2532837641U;
unsigned long long int var_9 = 15408086327835442448ULL;
unsigned int var_12 = 828979967U;
int var_14 = -666191675;
int zero = 0;
long long int var_16 = -7533429740861481354LL;
int var_17 = -1027041663;
unsigned int var_18 = 2892680302U;
long long int var_19 = -5257153862478838880LL;
long long int var_20 = -2706964127776717275LL;
unsigned char arr_17 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)221 : (unsigned char)215;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
