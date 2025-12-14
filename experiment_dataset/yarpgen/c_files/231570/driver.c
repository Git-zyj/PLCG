#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6420669736768134692ULL;
long long int var_7 = 5106817919966608511LL;
unsigned short var_11 = (unsigned short)40719;
int zero = 0;
unsigned short var_16 = (unsigned short)13989;
long long int var_17 = -695325935259338559LL;
short var_18 = (short)-14579;
int var_19 = -2030541740;
long long int var_20 = -2448028418009009064LL;
long long int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -1899825221947178963LL;
}

void checksum() {
    hash(&seed, var_16);
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
