#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -915535184;
unsigned int var_2 = 1442113523U;
unsigned int var_3 = 1233460606U;
short var_5 = (short)22174;
int var_6 = 796472500;
int var_7 = -2065848447;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)-107;
unsigned long long int var_16 = 3031261424708978690ULL;
unsigned char var_17 = (unsigned char)218;
int var_18 = 1246023387;
unsigned long long int var_19 = 11435472605862026335ULL;
int zero = 0;
long long int var_20 = 2054939317227445738LL;
long long int var_21 = 2386575967523189563LL;
int var_22 = 251574449;
unsigned long long int var_23 = 13979586736165736877ULL;
short var_24 = (short)-2202;
_Bool arr_0 [14] [14] ;
unsigned int arr_1 [14] ;
long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 3202040848U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2321326806770742877LL;
}

void checksum() {
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
