#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18301;
long long int var_2 = -4664024380658915825LL;
short var_10 = (short)-4375;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)25034;
int var_14 = -328975370;
void init() {
}

void checksum() {
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
