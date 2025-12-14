#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)33265;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 652363750U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = -1769607183;
int var_11 = 1825484319;
signed char var_12 = (signed char)0;
long long int var_13 = -838764446414246386LL;
long long int var_14 = 3344244969613857981LL;
unsigned int arr_1 [22] ;
unsigned long long int arr_3 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2327491285U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4532882080158693229ULL : 6598892474964523542ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
