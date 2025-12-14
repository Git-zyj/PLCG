#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
unsigned long long int var_10 = 7715291023684788225ULL;
long long int var_12 = -4166785124510321274LL;
int var_14 = 480225928;
long long int var_15 = 871875827330091913LL;
int var_17 = -1740629552;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)92;
unsigned long long int var_22 = 6428907666507047073ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
