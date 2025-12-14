#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2327976821937054773LL;
unsigned char var_2 = (unsigned char)57;
long long int var_5 = -4744653385469991695LL;
_Bool var_10 = (_Bool)1;
unsigned int var_13 = 3316142892U;
unsigned char var_14 = (unsigned char)68;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 1969641976U;
long long int var_20 = 8010835572512534446LL;
int var_21 = -862061221;
long long int var_22 = 7887080775198825821LL;
unsigned char var_23 = (unsigned char)67;
long long int var_24 = 5367270712550915867LL;
unsigned int arr_0 [21] ;
long long int arr_2 [21] ;
_Bool arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3582789472U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 6822471499446796561LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
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
