#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5879;
short var_1 = (short)23518;
_Bool var_2 = (_Bool)1;
long long int var_3 = 3290731561089435561LL;
int var_5 = 1100161150;
unsigned long long int var_6 = 9079090943658802065ULL;
int var_7 = -1528467994;
unsigned short var_9 = (unsigned short)36979;
unsigned short var_10 = (unsigned short)62741;
unsigned short var_11 = (unsigned short)63322;
int zero = 0;
signed char var_13 = (signed char)117;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)50;
unsigned short var_16 = (unsigned short)8394;
void init() {
}

void checksum() {
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
