#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
signed char var_1 = (signed char)86;
unsigned long long int var_3 = 14693159532289231875ULL;
signed char var_9 = (signed char)35;
signed char var_10 = (signed char)-11;
int var_11 = 2041604762;
signed char var_12 = (signed char)59;
int zero = 0;
long long int var_15 = -4883162656597757861LL;
signed char var_16 = (signed char)-58;
unsigned long long int var_17 = 17761394381272312227ULL;
unsigned short var_18 = (unsigned short)29225;
short var_19 = (short)-4082;
unsigned long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4832077070765186275ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
