#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1995032155;
long long int var_2 = 287278048326247640LL;
long long int var_3 = -7814667951060067864LL;
unsigned long long int var_4 = 12559070508590365344ULL;
short var_5 = (short)18109;
short var_6 = (short)6701;
unsigned int var_9 = 539831634U;
int zero = 0;
unsigned char var_10 = (unsigned char)93;
long long int var_11 = 9032590630665575368LL;
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
