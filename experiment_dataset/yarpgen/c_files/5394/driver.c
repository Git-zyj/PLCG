#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -615757582;
short var_1 = (short)-6769;
short var_2 = (short)5148;
unsigned char var_4 = (unsigned char)151;
long long int var_6 = -1111498395241041515LL;
long long int var_7 = 5714697478899063520LL;
unsigned int var_14 = 1892407653U;
int zero = 0;
unsigned char var_20 = (unsigned char)155;
long long int var_21 = 2358793908829371247LL;
unsigned long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14762144478488114862ULL : 5618267849153086847ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
