#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
long long int var_2 = 3352150539916456806LL;
unsigned short var_7 = (unsigned short)19073;
unsigned short var_9 = (unsigned short)9084;
int zero = 0;
int var_11 = -1628615287;
unsigned int var_12 = 4025134358U;
int var_13 = 1767959997;
unsigned int var_14 = 3170092187U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
