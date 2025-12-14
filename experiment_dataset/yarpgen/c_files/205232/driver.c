#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
_Bool var_2 = (_Bool)1;
int var_4 = 1437204787;
int var_5 = -573597260;
unsigned long long int var_7 = 15983699535399641400ULL;
int var_8 = -248423980;
signed char var_9 = (signed char)126;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)36451;
unsigned long long int var_13 = 6769655199992849305ULL;
int zero = 0;
int var_15 = -148637150;
signed char var_16 = (signed char)41;
unsigned long long int var_17 = 17808446093432576088ULL;
void init() {
}

void checksum() {
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
