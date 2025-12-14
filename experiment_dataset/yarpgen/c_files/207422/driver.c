#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1573566526;
unsigned long long int var_5 = 16235219130985922158ULL;
long long int var_11 = 4625593533201498820LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)8688;
void init() {
}

void checksum() {
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
