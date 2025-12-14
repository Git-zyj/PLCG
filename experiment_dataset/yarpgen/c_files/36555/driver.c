#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3806473362110055912LL;
unsigned long long int var_7 = 15472938353437512037ULL;
signed char var_8 = (signed char)119;
unsigned short var_10 = (unsigned short)46185;
int zero = 0;
unsigned char var_11 = (unsigned char)160;
unsigned char var_12 = (unsigned char)169;
unsigned char var_13 = (unsigned char)130;
unsigned long long int var_14 = 17533400225174530340ULL;
short var_15 = (short)-22002;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)25379;
}

void checksum() {
    hash(&seed, var_11);
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
