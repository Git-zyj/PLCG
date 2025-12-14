#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)173;
unsigned long long int var_2 = 11995186163249334589ULL;
unsigned long long int var_3 = 14586351129087760335ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 2378836854107147374ULL;
unsigned short var_8 = (unsigned short)34988;
short var_9 = (short)344;
short var_10 = (short)28807;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-13778;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
