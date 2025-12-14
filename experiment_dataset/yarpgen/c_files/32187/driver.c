#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)70;
unsigned long long int var_5 = 5435013280478900901ULL;
long long int var_7 = 2134645103543713601LL;
unsigned char var_8 = (unsigned char)61;
short var_9 = (short)-9538;
short var_10 = (short)2713;
signed char var_12 = (signed char)-103;
unsigned char var_14 = (unsigned char)37;
int zero = 0;
short var_15 = (short)-32418;
short var_16 = (short)-27870;
unsigned char var_17 = (unsigned char)207;
unsigned char var_18 = (unsigned char)182;
long long int var_19 = -1305835607055291745LL;
unsigned long long int arr_1 [19] ;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9296754423579535623ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 128202286;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
