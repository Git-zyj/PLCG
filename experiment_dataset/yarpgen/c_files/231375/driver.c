#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-108;
unsigned short var_1 = (unsigned short)33690;
short var_2 = (short)-27977;
long long int var_7 = -6041334806172279290LL;
unsigned long long int var_8 = 14489274386332386508ULL;
int var_12 = -915282997;
short var_16 = (short)27955;
unsigned short var_17 = (unsigned short)6660;
unsigned int var_19 = 2623130762U;
int zero = 0;
unsigned int var_20 = 1349293766U;
int var_21 = -1692225027;
signed char var_22 = (signed char)27;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)50097;
signed char arr_1 [15] ;
signed char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)-27;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
