#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27585;
unsigned int var_1 = 3828821171U;
long long int var_4 = 6144998380927230852LL;
short var_5 = (short)23988;
unsigned char var_10 = (unsigned char)119;
unsigned char var_11 = (unsigned char)169;
signed char var_12 = (signed char)36;
unsigned char var_14 = (unsigned char)227;
int zero = 0;
unsigned char var_15 = (unsigned char)128;
signed char var_16 = (signed char)13;
int var_17 = 640749604;
unsigned long long int var_18 = 11917721324245952252ULL;
long long int var_19 = -1502678207830744536LL;
unsigned int var_20 = 77806500U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-16955;
long long int var_23 = -893094998896377572LL;
unsigned char arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)12;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
