#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)78;
short var_4 = (short)-12723;
unsigned long long int var_8 = 14170826011644471676ULL;
long long int var_15 = 3279030823258527859LL;
int var_16 = 511988665;
int zero = 0;
short var_18 = (short)16711;
unsigned int var_19 = 2750722195U;
long long int var_20 = 4055988404983605079LL;
signed char var_21 = (signed char)111;
_Bool var_22 = (_Bool)0;
short arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-13255;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
