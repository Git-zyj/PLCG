#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)51;
unsigned int var_2 = 4097887548U;
signed char var_4 = (signed char)60;
unsigned long long int var_9 = 18196400727283131272ULL;
int zero = 0;
long long int var_12 = 6194594232997867474LL;
unsigned long long int var_13 = 13023292560595874702ULL;
signed char var_14 = (signed char)21;
unsigned short var_15 = (unsigned short)53657;
signed char arr_0 [17] [17] ;
short arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)20481 : (short)1922;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
