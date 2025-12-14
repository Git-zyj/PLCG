#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6157235165539790136ULL;
short var_1 = (short)6194;
unsigned long long int var_3 = 5198864296678110486ULL;
short var_4 = (short)19;
unsigned long long int var_5 = 15763012258316788138ULL;
short var_9 = (short)-7379;
int zero = 0;
short var_11 = (short)-21816;
unsigned long long int var_12 = 15341695075967120861ULL;
void init() {
}

void checksum() {
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
