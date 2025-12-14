#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 128137519U;
int var_2 = -563153217;
signed char var_5 = (signed char)47;
unsigned long long int var_7 = 5857485982931279759ULL;
unsigned long long int var_8 = 2397295900647440592ULL;
unsigned short var_10 = (unsigned short)20804;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)38;
int var_14 = -1108651184;
int zero = 0;
long long int var_18 = -2271991693707787086LL;
unsigned long long int var_19 = 14228096103598239510ULL;
unsigned int var_20 = 2632757230U;
long long int var_21 = 4561327818892062065LL;
unsigned short var_22 = (unsigned short)41507;
unsigned char var_23 = (unsigned char)64;
short var_24 = (short)-4120;
int arr_0 [10] [10] ;
unsigned long long int arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -754637912;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 4134070999165632096ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 3758372157U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -2058509217;
}

void checksum() {
    hash(&seed, var_18);
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
