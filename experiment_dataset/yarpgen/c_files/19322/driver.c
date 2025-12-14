#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)68;
int var_1 = -229254013;
unsigned long long int var_4 = 3888111624467786605ULL;
int var_5 = -1916742209;
long long int var_6 = -2545028489850406166LL;
unsigned int var_7 = 962840329U;
unsigned int var_9 = 1231542655U;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 831998837;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
