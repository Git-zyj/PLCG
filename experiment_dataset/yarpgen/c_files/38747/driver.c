#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16754572363412019957ULL;
int var_11 = 46301053;
unsigned long long int var_14 = 4277733336017456180ULL;
int zero = 0;
unsigned long long int var_15 = 16089962884121816151ULL;
unsigned long long int var_16 = 2029048494683760996ULL;
unsigned long long int var_17 = 13181465202377177623ULL;
unsigned long long int var_18 = 14292373125617593626ULL;
short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)31224;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
