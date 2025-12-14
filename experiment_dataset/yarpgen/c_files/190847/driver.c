#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)177;
unsigned short var_8 = (unsigned short)56928;
int var_10 = -1706703351;
signed char var_15 = (signed char)85;
int zero = 0;
unsigned long long int var_19 = 6630588065513300267ULL;
int var_20 = 477520560;
unsigned int var_21 = 667298696U;
signed char var_22 = (signed char)-40;
unsigned short arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10455 : (unsigned short)61957;
}

void checksum() {
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
