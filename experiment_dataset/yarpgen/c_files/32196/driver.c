#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14146322111186051932ULL;
short var_11 = (short)-10307;
int zero = 0;
unsigned short var_12 = (unsigned short)31483;
unsigned int var_13 = 3915822054U;
unsigned long long int var_14 = 10146488224578222214ULL;
unsigned long long int var_15 = 4788563764502424982ULL;
int var_16 = -1563158542;
long long int arr_0 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 2475688034167005563LL;
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
