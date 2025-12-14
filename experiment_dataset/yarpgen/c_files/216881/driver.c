#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3917409715U;
int var_5 = -2131158742;
short var_6 = (short)-19528;
unsigned long long int var_10 = 16185820202212660124ULL;
int zero = 0;
unsigned int var_12 = 2409404302U;
long long int var_13 = -1228312906798844164LL;
unsigned int var_14 = 406144738U;
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
