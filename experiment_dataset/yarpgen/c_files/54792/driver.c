#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2955238840U;
unsigned long long int var_6 = 6799380037822534966ULL;
signed char var_8 = (signed char)90;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 2462916859726639865ULL;
unsigned char var_12 = (unsigned char)46;
unsigned int var_13 = 4036849028U;
long long int var_14 = 4894964471791478541LL;
unsigned long long int var_15 = 5180299741327395621ULL;
signed char var_16 = (signed char)104;
long long int arr_0 [23] ;
long long int arr_1 [23] [23] ;
signed char arr_2 [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 595903701072155335LL : 8017796859945931470LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -7357870896111262393LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-85 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
