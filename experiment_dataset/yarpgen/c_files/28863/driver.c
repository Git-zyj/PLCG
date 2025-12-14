#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14744180746465301075ULL;
int var_1 = -229294136;
int var_2 = 50856417;
long long int var_5 = -2687458289428973551LL;
unsigned int var_9 = 2619884891U;
unsigned char var_10 = (unsigned char)123;
long long int var_11 = 3404092540154331793LL;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
int var_21 = 836183725;
int var_22 = 1113020271;
unsigned long long int var_23 = 9934260360687674435ULL;
long long int var_24 = -6808492979972695909LL;
int var_25 = -896238481;
short arr_0 [10] ;
short arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
unsigned int arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)14585;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-14102;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 3499746484U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 641567155U;
}

void checksum() {
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
