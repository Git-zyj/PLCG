#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2016621851;
unsigned long long int var_1 = 8036056261644305139ULL;
unsigned int var_13 = 1852403778U;
signed char var_15 = (signed char)31;
int zero = 0;
unsigned char var_16 = (unsigned char)66;
unsigned int var_17 = 3803105059U;
unsigned short var_18 = (unsigned short)49347;
signed char var_19 = (signed char)19;
long long int arr_1 [18] ;
unsigned char arr_2 [18] ;
unsigned short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -5114787514404437533LL : -4189512105897473922LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)48 : (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned short)47599;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
