#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4130782129U;
short var_2 = (short)10169;
int var_7 = 687188017;
int var_10 = -112528086;
long long int var_11 = -5361362755063361966LL;
unsigned int var_12 = 335246403U;
int zero = 0;
unsigned int var_13 = 1579136320U;
unsigned long long int var_14 = 13455108052728237642ULL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-125;
_Bool var_17 = (_Bool)1;
int var_18 = 114769233;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 367613057890507705LL : -6788353267800363040LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
