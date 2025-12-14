#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)59;
int var_4 = 1238692066;
long long int var_5 = -8241637778761386682LL;
long long int var_10 = 1859046936825789324LL;
int var_13 = 1593096628;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
unsigned long long int var_19 = 14325293334815760332ULL;
long long int var_20 = 4589556609807461730LL;
unsigned char var_21 = (unsigned char)129;
int var_22 = 1023005449;
long long int arr_0 [22] [22] ;
int arr_1 [22] [22] ;
long long int arr_2 [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 4513852799923381029LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 728317295 : -773294688;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -1810993224739867671LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5078795878775239200LL : -6350594025021674425LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
