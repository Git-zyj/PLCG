#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 416834162;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1913184760U;
unsigned long long int var_16 = 15572869466521775377ULL;
int zero = 0;
unsigned long long int var_19 = 9167965054458413442ULL;
signed char var_20 = (signed char)-52;
signed char var_21 = (signed char)-82;
short var_22 = (short)29495;
int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 385490460 : 1897207316;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
