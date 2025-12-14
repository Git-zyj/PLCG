#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20270;
unsigned int var_4 = 3469250247U;
unsigned short var_5 = (unsigned short)35072;
unsigned short var_7 = (unsigned short)18384;
unsigned short var_14 = (unsigned short)25458;
short var_19 = (short)19598;
int zero = 0;
short var_20 = (short)-31250;
unsigned int var_21 = 458774505U;
short var_22 = (short)-27;
unsigned short var_23 = (unsigned short)24074;
unsigned int var_24 = 3754284543U;
unsigned short arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)40433;
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
