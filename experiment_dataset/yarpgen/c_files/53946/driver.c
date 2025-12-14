#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2141979324U;
unsigned int var_4 = 1253670339U;
unsigned int var_5 = 3661189891U;
int var_7 = 616945476;
short var_8 = (short)-8869;
signed char var_9 = (signed char)27;
short var_11 = (short)15953;
unsigned short var_12 = (unsigned short)18570;
int zero = 0;
unsigned int var_13 = 1913866188U;
short var_14 = (short)-6721;
short var_15 = (short)10708;
unsigned short arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)7462;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
