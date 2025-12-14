#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3248724680U;
unsigned short var_7 = (unsigned short)27995;
unsigned int var_8 = 1966906305U;
short var_10 = (short)15829;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4496794934231202143LL;
int var_13 = -95018357;
int var_14 = 1924953880;
unsigned short var_15 = (unsigned short)15561;
void init() {
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
