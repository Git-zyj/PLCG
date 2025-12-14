#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3768772643560499309LL;
signed char var_9 = (signed char)-45;
signed char var_13 = (signed char)-99;
unsigned int var_16 = 1795556641U;
int zero = 0;
signed char var_17 = (signed char)-24;
long long int var_18 = 4870933142673550935LL;
long long int var_19 = 1990436655357525145LL;
int var_20 = -979055702;
unsigned char var_21 = (unsigned char)31;
signed char var_22 = (signed char)13;
signed char var_23 = (signed char)-49;
long long int var_24 = 5185405895553971359LL;
unsigned long long int arr_0 [20] [20] ;
unsigned char arr_1 [20] ;
signed char arr_5 [11] ;
_Bool arr_2 [20] ;
_Bool arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 10438131860127534870ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
