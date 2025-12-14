#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -225103597615896830LL;
unsigned short var_5 = (unsigned short)28924;
int zero = 0;
int var_11 = -1553246410;
long long int var_12 = 7671598252968974540LL;
long long int var_13 = 4092820012604262290LL;
signed char var_14 = (signed char)-38;
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
