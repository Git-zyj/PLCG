#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6368912678582950660LL;
unsigned char var_2 = (unsigned char)57;
unsigned long long int var_3 = 4833379606540726134ULL;
_Bool var_6 = (_Bool)0;
short var_7 = (short)10845;
long long int var_9 = 1041407492351704229LL;
int zero = 0;
unsigned short var_12 = (unsigned short)53865;
int var_13 = -1286731614;
unsigned int var_14 = 3797382695U;
unsigned char var_15 = (unsigned char)147;
int var_16 = 353285496;
long long int arr_3 [11] [11] [11] ;
int arr_4 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4461150597458988643LL : 184193108292177068LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1943769336;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
