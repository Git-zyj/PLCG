#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7492580688066306675LL;
long long int var_8 = 3353786529557687844LL;
unsigned int var_10 = 3266126731U;
unsigned short var_11 = (unsigned short)60612;
unsigned short var_12 = (unsigned short)5731;
int zero = 0;
unsigned char var_13 = (unsigned char)61;
signed char var_14 = (signed char)-75;
unsigned short var_15 = (unsigned short)24962;
short var_16 = (short)8529;
unsigned char arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)164;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
