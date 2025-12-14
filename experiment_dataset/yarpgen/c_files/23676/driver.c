#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -303319087;
short var_11 = (short)25048;
unsigned char var_15 = (unsigned char)179;
signed char var_16 = (signed char)-3;
int zero = 0;
int var_17 = -1686813294;
long long int var_18 = -3179296162585360618LL;
unsigned char var_19 = (unsigned char)54;
_Bool var_20 = (_Bool)1;
long long int var_21 = -1142640476368498545LL;
_Bool arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
