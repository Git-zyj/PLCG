#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7925157582118618340ULL;
unsigned long long int var_2 = 3912990811186466879ULL;
signed char var_4 = (signed char)48;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-23797;
int var_7 = 383996027;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-28745;
unsigned long long int var_12 = 4173473539967904980ULL;
int var_13 = -14044451;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 4602993508100666212ULL;
long long int var_16 = -2444998150227276346LL;
unsigned long long int var_17 = 11238969776870240438ULL;
unsigned int arr_0 [16] [16] ;
unsigned long long int arr_2 [25] ;
unsigned long long int arr_6 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3073963561U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 529038936001366946ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 9247088622013097569ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
