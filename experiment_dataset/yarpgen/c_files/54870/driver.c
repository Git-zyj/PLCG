#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 316739243;
signed char var_2 = (signed char)-74;
short var_3 = (short)14146;
short var_6 = (short)10186;
signed char var_10 = (signed char)117;
unsigned short var_11 = (unsigned short)5262;
signed char var_12 = (signed char)-80;
int zero = 0;
signed char var_13 = (signed char)80;
signed char var_14 = (signed char)49;
signed char var_15 = (signed char)-86;
unsigned int var_16 = 4168979526U;
signed char var_17 = (signed char)118;
int arr_0 [15] ;
signed char arr_4 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -175472462;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (signed char)21;
}

void checksum() {
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
