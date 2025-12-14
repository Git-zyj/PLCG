#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8384452167699694748ULL;
long long int var_5 = -3109519758987234733LL;
signed char var_13 = (signed char)25;
unsigned long long int var_14 = 15719761234708269010ULL;
int zero = 0;
signed char var_15 = (signed char)-63;
signed char var_16 = (signed char)-55;
void init() {
}

void checksum() {
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
