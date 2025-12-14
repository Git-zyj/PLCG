#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-13351;
unsigned long long int var_3 = 11901123609654723013ULL;
unsigned int var_5 = 2970566157U;
unsigned int var_8 = 832307416U;
unsigned int var_9 = 3000368954U;
short var_10 = (short)-30445;
signed char var_14 = (signed char)-107;
unsigned int var_15 = 1675481054U;
long long int var_16 = -2215377317147712996LL;
int zero = 0;
unsigned int var_18 = 2358052568U;
long long int var_19 = 5377970314756704176LL;
signed char var_20 = (signed char)90;
unsigned long long int var_21 = 10421858714522610202ULL;
unsigned short var_22 = (unsigned short)37062;
unsigned long long int var_23 = 8070614817495046902ULL;
signed char var_24 = (signed char)-75;
unsigned int arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 2443548645U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
