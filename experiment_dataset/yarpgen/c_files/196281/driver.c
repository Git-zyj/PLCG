#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3376825811256015829LL;
int var_5 = -1438510528;
unsigned short var_7 = (unsigned short)43247;
unsigned long long int var_10 = 15584958398900411350ULL;
long long int var_11 = 541114628282508931LL;
signed char var_12 = (signed char)108;
unsigned long long int var_18 = 8667050544780485970ULL;
int zero = 0;
int var_19 = -974457377;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)79;
unsigned int var_22 = 1953985495U;
int arr_2 [14] [14] [14] ;
unsigned int arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1509222515;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 2098223522U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
