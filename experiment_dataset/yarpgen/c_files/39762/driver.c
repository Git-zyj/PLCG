#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9196;
signed char var_1 = (signed char)25;
unsigned short var_7 = (unsigned short)62402;
unsigned long long int var_8 = 10477427920387247756ULL;
signed char var_10 = (signed char)-96;
int zero = 0;
short var_12 = (short)-180;
unsigned short var_13 = (unsigned short)43226;
long long int var_14 = 6578186603807445906LL;
short var_15 = (short)5416;
signed char var_16 = (signed char)-37;
signed char var_17 = (signed char)-73;
unsigned short arr_2 [21] [21] ;
unsigned int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)26190;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3508671257U : 2561991335U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
