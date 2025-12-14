#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7560776732747482464LL;
unsigned long long int var_1 = 9453932380892714492ULL;
unsigned int var_2 = 2173687400U;
unsigned int var_3 = 2096933069U;
unsigned char var_4 = (unsigned char)135;
long long int var_5 = -124338466729324164LL;
unsigned char var_8 = (unsigned char)222;
int zero = 0;
unsigned char var_10 = (unsigned char)40;
unsigned short var_11 = (unsigned short)45844;
unsigned char var_12 = (unsigned char)232;
int var_13 = -382629102;
long long int arr_1 [19] ;
unsigned char arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 7252065124102146969LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)62;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
