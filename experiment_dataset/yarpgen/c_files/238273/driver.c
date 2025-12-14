#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1526077471U;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 1324460654U;
long long int var_6 = 5567256012707824196LL;
unsigned short var_11 = (unsigned short)46207;
long long int var_12 = -1294080354085903529LL;
int var_13 = -351499993;
unsigned char var_14 = (unsigned char)34;
unsigned long long int var_16 = 15829207528256266335ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)121;
unsigned long long int var_21 = 2222691801183096017ULL;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)62913;
signed char var_25 = (signed char)15;
_Bool var_26 = (_Bool)0;
int arr_0 [12] ;
long long int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1886857525;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3061569794183428889LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
