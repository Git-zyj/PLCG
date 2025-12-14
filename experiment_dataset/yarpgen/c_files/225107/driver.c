#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1401579959;
unsigned short var_4 = (unsigned short)49159;
long long int var_11 = -5501469635688347715LL;
int zero = 0;
long long int var_12 = 1077016026139984767LL;
signed char var_13 = (signed char)1;
long long int var_14 = 61205314807744099LL;
short var_15 = (short)32479;
unsigned char var_16 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
