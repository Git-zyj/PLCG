#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1693;
unsigned long long int var_9 = 12536240831071432587ULL;
long long int var_11 = 3114210933254089860LL;
int zero = 0;
signed char var_17 = (signed char)110;
signed char var_18 = (signed char)37;
short var_19 = (short)-1506;
unsigned int var_20 = 3438057011U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
