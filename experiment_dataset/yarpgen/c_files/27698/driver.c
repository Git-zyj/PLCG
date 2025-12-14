#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)6151;
long long int var_3 = 3218552077525714637LL;
long long int var_9 = -6808758426010526435LL;
int zero = 0;
unsigned short var_20 = (unsigned short)21119;
unsigned short var_21 = (unsigned short)44833;
unsigned short var_22 = (unsigned short)57950;
unsigned short var_23 = (unsigned short)60464;
int var_24 = -156629544;
unsigned short arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)10231;
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
