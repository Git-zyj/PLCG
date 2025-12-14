#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1127196588U;
unsigned int var_3 = 3450398803U;
unsigned int var_4 = 1961452363U;
unsigned int var_6 = 1474502004U;
unsigned int var_7 = 3867314637U;
unsigned int var_8 = 3352376800U;
unsigned int var_9 = 1848873921U;
int zero = 0;
unsigned int var_11 = 4274451562U;
unsigned int var_12 = 4066231369U;
unsigned int var_13 = 1098399441U;
unsigned int var_14 = 4243747182U;
unsigned int var_15 = 2249554118U;
unsigned int var_16 = 313127536U;
unsigned int arr_0 [20] ;
unsigned int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1874514613U : 3743920112U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3914185670U;
}

void checksum() {
    hash(&seed, var_11);
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
