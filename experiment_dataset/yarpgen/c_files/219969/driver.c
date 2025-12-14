#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 161914535U;
unsigned char var_1 = (unsigned char)99;
unsigned long long int var_3 = 13897008538953230012ULL;
unsigned char var_5 = (unsigned char)186;
long long int var_8 = 6383587548685665484LL;
unsigned int var_9 = 1701322393U;
short var_10 = (short)9790;
int zero = 0;
long long int var_12 = -2108111350673105372LL;
short var_13 = (short)13393;
unsigned short var_14 = (unsigned short)28130;
signed char var_15 = (signed char)-111;
unsigned long long int var_16 = 15076361052675483250ULL;
unsigned long long int arr_8 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = 16965216563248757602ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
