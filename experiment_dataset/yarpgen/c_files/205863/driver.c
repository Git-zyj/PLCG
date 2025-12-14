#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-48;
long long int var_5 = 3699709143202215630LL;
unsigned char var_9 = (unsigned char)47;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 11599219029040477556ULL;
long long int var_12 = -8595967038581680270LL;
long long int var_14 = 3852324135599729541LL;
signed char var_15 = (signed char)-7;
int var_16 = 181764355;
int zero = 0;
unsigned int var_19 = 910576632U;
signed char var_20 = (signed char)-36;
signed char var_21 = (signed char)-38;
unsigned int var_22 = 4108544766U;
unsigned short var_23 = (unsigned short)15441;
unsigned char var_24 = (unsigned char)222;
short arr_0 [23] [23] ;
long long int arr_1 [23] ;
long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11902;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8840432782827970791LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7303444435587722719LL : -8526315671547766340LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
