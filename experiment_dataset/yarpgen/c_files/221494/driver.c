#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -567494675;
unsigned char var_2 = (unsigned char)78;
unsigned short var_4 = (unsigned short)47203;
unsigned long long int var_6 = 2223307927425792314ULL;
short var_8 = (short)3905;
int var_11 = -432661796;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -598327701;
unsigned long long int var_22 = 15019811720642680121ULL;
unsigned short var_23 = (unsigned short)29710;
unsigned short var_24 = (unsigned short)7053;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_4 [10] [10] ;
unsigned short arr_6 [10] [10] ;
_Bool arr_9 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 6061610490653657551ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 3837830868318695420ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)40965;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
