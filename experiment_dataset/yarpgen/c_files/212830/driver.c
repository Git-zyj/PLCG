#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 874993576;
unsigned short var_6 = (unsigned short)25385;
unsigned int var_7 = 4151460784U;
int zero = 0;
int var_10 = 1614122533;
unsigned long long int var_11 = 7603310786589352523ULL;
long long int var_12 = -5620318099129405569LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
