#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11464;
unsigned int var_1 = 599226361U;
signed char var_2 = (signed char)-103;
long long int var_3 = 7250414006048966063LL;
unsigned int var_4 = 4115564264U;
unsigned char var_6 = (unsigned char)103;
short var_7 = (short)-3409;
unsigned int var_10 = 3290268026U;
long long int var_11 = 8370022222938233685LL;
long long int var_14 = 5365907059831722859LL;
signed char var_15 = (signed char)-91;
int zero = 0;
signed char var_16 = (signed char)-72;
long long int var_17 = 5752559607961143002LL;
unsigned long long int var_18 = 8498679932907376499ULL;
unsigned int var_19 = 4265849609U;
unsigned long long int var_20 = 14315364566967873746ULL;
long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 5765834967667374969LL;
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
