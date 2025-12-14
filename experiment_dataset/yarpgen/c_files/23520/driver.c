#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)153;
short var_8 = (short)-5973;
int var_9 = -1973147159;
unsigned short var_10 = (unsigned short)14993;
unsigned long long int var_12 = 17581908199611708537ULL;
unsigned short var_14 = (unsigned short)36801;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 7500233965242825375LL;
signed char var_17 = (signed char)-33;
long long int var_18 = 933961087432263593LL;
long long int var_19 = 724268756155741932LL;
unsigned long long int var_20 = 9625095862631758073ULL;
unsigned int var_21 = 3957813933U;
unsigned char arr_0 [10] ;
unsigned int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 3869063714U;
}

void checksum() {
    hash(&seed, var_15);
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
