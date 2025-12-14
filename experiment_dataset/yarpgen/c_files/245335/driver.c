#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17133163250697397271ULL;
unsigned int var_7 = 1712009318U;
int var_9 = 1195933214;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)38247;
short var_15 = (short)-4683;
int zero = 0;
long long int var_17 = -3972237736078792029LL;
int var_18 = 481034120;
signed char var_19 = (signed char)-96;
long long int var_20 = 5749112524980224133LL;
_Bool var_21 = (_Bool)0;
signed char arr_3 [25] [25] ;
short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)126 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)334;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
