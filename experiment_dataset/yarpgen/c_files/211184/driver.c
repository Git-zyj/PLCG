#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1618438718;
unsigned short var_2 = (unsigned short)13644;
unsigned int var_4 = 1628756015U;
int var_9 = 1955410683;
int zero = 0;
long long int var_12 = 5895796383876283221LL;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)151;
void init() {
}

void checksum() {
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
