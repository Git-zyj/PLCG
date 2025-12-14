#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)129;
unsigned int var_3 = 4172308756U;
long long int var_6 = -6940016209991575371LL;
unsigned char var_9 = (unsigned char)158;
unsigned int var_11 = 1250927743U;
int zero = 0;
unsigned char var_12 = (unsigned char)18;
short var_13 = (short)-30924;
signed char var_14 = (signed char)-17;
long long int var_15 = 3269303643861009448LL;
long long int var_16 = -365294124457168344LL;
int arr_2 [20] ;
unsigned int arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 1411493348;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2324727784U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
