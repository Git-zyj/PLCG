#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3521507531309736124ULL;
long long int var_4 = -4428354231081143791LL;
int zero = 0;
unsigned short var_11 = (unsigned short)51886;
unsigned short var_12 = (unsigned short)60534;
long long int var_13 = 2180774960383726104LL;
unsigned int var_14 = 303609206U;
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
