#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned char var_3 = (unsigned char)253;
unsigned int var_7 = 1998843102U;
short var_10 = (short)-11171;
signed char var_12 = (signed char)-3;
int zero = 0;
signed char var_16 = (signed char)-39;
short var_17 = (short)-16729;
long long int var_18 = 9148516800312786432LL;
unsigned int var_19 = 1355994669U;
unsigned long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10252000678052688177ULL;
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
