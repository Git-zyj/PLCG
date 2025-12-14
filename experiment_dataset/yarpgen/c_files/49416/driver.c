#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3370041866030085418LL;
unsigned int var_1 = 111371511U;
unsigned short var_2 = (unsigned short)62947;
_Bool var_3 = (_Bool)1;
int var_4 = 202832826;
unsigned short var_5 = (unsigned short)20270;
int var_6 = 285905703;
unsigned long long int var_7 = 4144731194883125599ULL;
short var_8 = (short)-6748;
signed char var_9 = (signed char)62;
int var_10 = -82514544;
long long int var_11 = 8284455295685062883LL;
int zero = 0;
int var_12 = 1334816039;
unsigned short var_13 = (unsigned short)22132;
long long int var_14 = 4258238168101351926LL;
short var_15 = (short)10595;
int var_16 = 1268118618;
int var_17 = 1695407912;
short var_18 = (short)-325;
long long int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -3802681299674518304LL : 2621289947389301822LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
