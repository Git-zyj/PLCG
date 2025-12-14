#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6408;
unsigned int var_1 = 198768132U;
int var_6 = -1514305393;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_12 = -767744371808673526LL;
long long int var_13 = -3043096875280788946LL;
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
