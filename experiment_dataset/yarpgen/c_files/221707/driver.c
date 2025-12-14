#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9249;
unsigned int var_1 = 1754355996U;
signed char var_7 = (signed char)-68;
unsigned int var_9 = 1493969167U;
int zero = 0;
int var_12 = 2144758385;
unsigned short var_13 = (unsigned short)50595;
unsigned char var_14 = (unsigned char)180;
short var_15 = (short)-31123;
int var_16 = 459089837;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)32;
}

void checksum() {
    hash(&seed, var_12);
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
