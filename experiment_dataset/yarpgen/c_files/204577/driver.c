#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)174;
long long int var_3 = 2261046416143639794LL;
unsigned long long int var_4 = 6072142628393778708ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 840467844U;
int var_7 = -465707881;
unsigned char var_8 = (unsigned char)21;
unsigned int var_9 = 612082346U;
int zero = 0;
unsigned short var_10 = (unsigned short)53329;
unsigned long long int var_11 = 4056591669507389311ULL;
long long int var_12 = -2739762620522428029LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
