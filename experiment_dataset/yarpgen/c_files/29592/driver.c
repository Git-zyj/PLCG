#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4117043073401411660ULL;
unsigned short var_8 = (unsigned short)29983;
long long int var_9 = -4792615675718376453LL;
unsigned short var_11 = (unsigned short)25702;
int zero = 0;
int var_12 = -492864639;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-12310;
int var_15 = -217969879;
long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -4255760144172939556LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
