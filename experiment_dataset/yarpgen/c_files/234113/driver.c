#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 2952222369U;
short var_11 = (short)-11460;
short var_13 = (short)-3625;
short var_14 = (short)-23169;
unsigned int var_16 = 438164337U;
int zero = 0;
signed char var_17 = (signed char)116;
unsigned long long int var_18 = 12532866941273394679ULL;
unsigned short var_19 = (unsigned short)4567;
long long int var_20 = 7824258486892193784LL;
unsigned long long int var_21 = 17246911140410616437ULL;
short var_22 = (short)-27014;
short arr_0 [11] ;
int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (short)-25715;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -249895394;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
