#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
long long int var_2 = 3650649104861089290LL;
unsigned int var_3 = 429754999U;
int var_4 = -554872194;
unsigned short var_6 = (unsigned short)11725;
unsigned int var_7 = 235469985U;
long long int var_8 = 8624468725931353531LL;
unsigned char var_9 = (unsigned char)59;
unsigned int var_10 = 2162430390U;
signed char var_13 = (signed char)-32;
long long int var_14 = 5331443678729573162LL;
unsigned int var_16 = 2173892938U;
int zero = 0;
unsigned char var_17 = (unsigned char)151;
long long int var_18 = 203812811885136828LL;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)84;
unsigned short var_21 = (unsigned short)5410;
int arr_1 [10] ;
int arr_2 [10] ;
signed char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 230546704;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 124315680;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-8;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
