#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8261675095427418998LL;
unsigned int var_3 = 1324494951U;
unsigned char var_5 = (unsigned char)74;
signed char var_7 = (signed char)-66;
long long int var_8 = 546472300423874165LL;
signed char var_9 = (signed char)-69;
long long int var_10 = 5121316221488748971LL;
unsigned char var_11 = (unsigned char)165;
signed char var_12 = (signed char)-14;
long long int var_14 = -297084993177296950LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 419388723;
unsigned long long int var_20 = 11597748025133587786ULL;
unsigned char arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned char)13;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
