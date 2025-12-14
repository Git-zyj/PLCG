#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)123;
short var_6 = (short)-26137;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 8270920580881811615ULL;
unsigned char var_16 = (unsigned char)151;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int var_20 = -1189366637;
long long int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 2467556834696872912LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
