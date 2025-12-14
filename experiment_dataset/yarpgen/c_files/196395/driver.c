#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2367;
int var_3 = -1141596257;
int zero = 0;
unsigned char var_10 = (unsigned char)192;
unsigned char var_11 = (unsigned char)60;
unsigned long long int var_12 = 6012762231324057840ULL;
int var_13 = -2028429028;
long long int var_14 = -3417556024646945089LL;
int var_15 = 1004211060;
unsigned long long int var_16 = 14281774472935197695ULL;
short var_17 = (short)-13138;
unsigned char var_18 = (unsigned char)141;
unsigned short var_19 = (unsigned short)50665;
unsigned int var_20 = 4288556430U;
signed char arr_18 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)87;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
