#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 15650575841960189515ULL;
int var_4 = -1419354110;
signed char var_5 = (signed char)-5;
unsigned int var_8 = 3450359758U;
long long int var_9 = -6090790779793663344LL;
int zero = 0;
unsigned int var_10 = 2390329183U;
long long int var_11 = -382387834654027460LL;
unsigned short var_12 = (unsigned short)26944;
int var_13 = -1775887028;
signed char var_14 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
