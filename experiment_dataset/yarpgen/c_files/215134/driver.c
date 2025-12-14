#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)21;
short var_6 = (short)-9865;
short var_7 = (short)31531;
short var_11 = (short)25065;
int var_13 = 1077342672;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = 6175482659845786503LL;
unsigned char var_18 = (unsigned char)143;
unsigned long long int var_19 = 945624868880105207ULL;
_Bool var_20 = (_Bool)0;
long long int arr_0 [16] [16] ;
unsigned char arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 3187276303336534249LL : 3922885919511444264LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)89 : (unsigned char)186;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
