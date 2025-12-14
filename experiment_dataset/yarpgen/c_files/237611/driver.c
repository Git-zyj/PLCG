#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-74;
signed char var_11 = (signed char)-112;
_Bool var_12 = (_Bool)0;
long long int var_14 = -8219267878979848270LL;
unsigned long long int var_15 = 7403111596152237348ULL;
signed char var_18 = (signed char)-21;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 16489653571826714245ULL;
long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 4521025147947249625LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
