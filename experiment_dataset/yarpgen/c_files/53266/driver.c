#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2265291707031234085ULL;
unsigned char var_5 = (unsigned char)67;
unsigned int var_8 = 1106751749U;
unsigned char var_12 = (unsigned char)210;
signed char var_15 = (signed char)21;
int zero = 0;
unsigned int var_16 = 1268081506U;
int var_17 = 123005086;
signed char var_18 = (signed char)37;
signed char var_19 = (signed char)56;
long long int arr_1 [25] ;
signed char arr_4 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -7494311516627153570LL : -8106565015672753997LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)-7;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
