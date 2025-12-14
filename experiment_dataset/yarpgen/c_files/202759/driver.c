#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5800417081460833718LL;
unsigned short var_6 = (unsigned short)4395;
unsigned short var_8 = (unsigned short)34374;
unsigned short var_10 = (unsigned short)36733;
int zero = 0;
long long int var_12 = -1818305293136259233LL;
long long int var_13 = 3693223009924910918LL;
unsigned short var_14 = (unsigned short)39543;
unsigned short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)42809;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
