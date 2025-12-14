#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5293801035461762331LL;
signed char var_2 = (signed char)-58;
_Bool var_6 = (_Bool)0;
int var_7 = 2045502261;
int var_8 = 1195583749;
unsigned char var_9 = (unsigned char)143;
int zero = 0;
unsigned int var_12 = 1820342146U;
short var_13 = (short)16707;
short var_14 = (short)18939;
long long int var_15 = 6591998186371400666LL;
signed char var_16 = (signed char)-7;
unsigned long long int var_17 = 7438139942861382131ULL;
long long int arr_3 [23] [23] ;
short arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 6274679220642943285LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-29236;
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
