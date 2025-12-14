#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6435680539099236156ULL;
long long int var_5 = -3863097787887209246LL;
unsigned short var_6 = (unsigned short)139;
long long int var_7 = 2780266504824529027LL;
long long int var_8 = -1800838715131045454LL;
int zero = 0;
unsigned short var_11 = (unsigned short)35816;
unsigned short var_12 = (unsigned short)857;
long long int var_13 = 6439673974352061365LL;
long long int var_14 = -8685783968473534316LL;
unsigned long long int arr_0 [17] [17] ;
unsigned int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 17293554468510435786ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 4109767777U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
