#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 5493497050288372010LL;
signed char var_9 = (signed char)-100;
unsigned char var_10 = (unsigned char)10;
unsigned int var_12 = 1562574434U;
short var_18 = (short)517;
int zero = 0;
unsigned short var_20 = (unsigned short)3840;
long long int var_21 = 2159154068833087687LL;
unsigned int var_22 = 4011976104U;
short var_23 = (short)17071;
short arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)5848;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
