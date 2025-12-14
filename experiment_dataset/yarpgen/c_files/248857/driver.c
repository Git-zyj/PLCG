#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2036987468U;
long long int var_2 = 8448325991565366504LL;
long long int var_4 = -677107242484821601LL;
unsigned int var_5 = 844996208U;
unsigned short var_7 = (unsigned short)16974;
unsigned short var_9 = (unsigned short)22242;
long long int var_14 = 3263772536017057063LL;
unsigned int var_15 = 1990829236U;
int zero = 0;
unsigned int var_20 = 12649065U;
unsigned int var_21 = 3186797681U;
unsigned short var_22 = (unsigned short)57140;
unsigned int var_23 = 1445313626U;
unsigned int var_24 = 382052667U;
unsigned int var_25 = 411447145U;
unsigned int arr_2 [11] [11] ;
signed char arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 2174351276U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)67;
}

void checksum() {
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
