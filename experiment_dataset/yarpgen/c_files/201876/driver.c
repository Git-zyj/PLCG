#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)170;
signed char var_4 = (signed char)-115;
unsigned char var_7 = (unsigned char)178;
unsigned int var_8 = 240629134U;
long long int var_10 = 1675950108795878326LL;
unsigned int var_14 = 3959223592U;
int zero = 0;
int var_16 = -717619958;
long long int var_17 = 1912936698649384598LL;
long long int var_18 = 3608139452345678314LL;
long long int var_19 = -8248982327002954371LL;
long long int arr_2 [18] [18] ;
unsigned short arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -994709499672250240LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)32570;
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
