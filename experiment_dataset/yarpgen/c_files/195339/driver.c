#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
unsigned short var_2 = (unsigned short)49050;
unsigned long long int var_3 = 4144048773824635374ULL;
unsigned long long int var_9 = 18444184770437427648ULL;
int zero = 0;
unsigned long long int var_11 = 17001855451935143021ULL;
signed char var_12 = (signed char)-45;
_Bool var_13 = (_Bool)1;
_Bool arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
