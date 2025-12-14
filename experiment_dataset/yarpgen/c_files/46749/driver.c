#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 939222805553591979ULL;
unsigned int var_4 = 1109599112U;
signed char var_5 = (signed char)(-127 - 1);
unsigned long long int var_7 = 12311614333814055336ULL;
unsigned long long int var_18 = 14540296760542521416ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)81;
unsigned long long int var_20 = 17097726286995256526ULL;
int var_21 = -1116157031;
signed char var_22 = (signed char)78;
unsigned long long int var_23 = 4347879124221571717ULL;
int var_24 = -1029131830;
unsigned long long int var_25 = 8786455162847674420ULL;
unsigned long long int var_26 = 14919700264357609474ULL;
unsigned char arr_1 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 6307441211203624376ULL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
