#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-73;
short var_1 = (short)8778;
_Bool var_2 = (_Bool)1;
short var_5 = (short)4460;
long long int var_6 = 4814586653106900309LL;
int zero = 0;
short var_18 = (short)18974;
unsigned int var_19 = 2522098033U;
long long int var_20 = 3609431811689572343LL;
int var_21 = -1046888501;
unsigned long long int var_22 = 17341142347611846085ULL;
int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 249482449;
}

void checksum() {
    hash(&seed, var_18);
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
