#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)10557;
signed char var_8 = (signed char)-110;
signed char var_14 = (signed char)80;
signed char var_16 = (signed char)123;
int zero = 0;
long long int var_17 = -2468505889516510143LL;
short var_18 = (short)8047;
long long int var_19 = -2932178425841123357LL;
unsigned long long int var_20 = 15860658845988041534ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 4213303495603749034ULL;
short var_23 = (short)-19951;
unsigned short arr_3 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)29036;
}

void checksum() {
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
