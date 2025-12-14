#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14316;
short var_1 = (short)1381;
signed char var_2 = (signed char)21;
long long int var_7 = 4038586312232365457LL;
signed char var_11 = (signed char)6;
int var_12 = -80174499;
int var_15 = -530566543;
int zero = 0;
signed char var_19 = (signed char)-50;
int var_20 = -491386292;
short var_21 = (short)12660;
_Bool var_22 = (_Bool)1;
long long int var_23 = -1328123188299389794LL;
long long int var_24 = -8137778869154949910LL;
long long int var_25 = 2041062882612418484LL;
signed char arr_1 [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)58;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = -3710079288952589612LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
