#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1248277469;
long long int var_2 = -1503444618797415844LL;
unsigned int var_4 = 4049770354U;
_Bool var_6 = (_Bool)1;
int zero = 0;
unsigned int var_10 = 2666929412U;
unsigned int var_11 = 3718957263U;
unsigned char var_12 = (unsigned char)3;
unsigned char var_13 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
