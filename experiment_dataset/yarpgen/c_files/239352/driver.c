#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1405544693;
short var_4 = (short)-5364;
long long int var_6 = -7215251872740386018LL;
short var_7 = (short)-25213;
int var_8 = 108289109;
unsigned short var_9 = (unsigned short)64617;
int zero = 0;
long long int var_12 = -5951371642420064571LL;
int var_13 = -493493205;
unsigned long long int var_14 = 10590312127318173073ULL;
long long int var_15 = 3511841588471963606LL;
unsigned long long int var_16 = 5260236781424699344ULL;
int var_17 = -1242440138;
_Bool arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
