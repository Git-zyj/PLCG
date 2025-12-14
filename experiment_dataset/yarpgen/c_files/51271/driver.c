#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 163707025;
int var_7 = 508537219;
unsigned short var_10 = (unsigned short)25474;
unsigned short var_12 = (unsigned short)15973;
int zero = 0;
signed char var_19 = (signed char)43;
int var_20 = -2105725723;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 1958406639699271583ULL;
short arr_0 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (short)7411;
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
