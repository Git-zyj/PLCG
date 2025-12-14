#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2971134941640782555LL;
short var_5 = (short)-8524;
long long int var_7 = -3425419895681385182LL;
int zero = 0;
long long int var_12 = -875143802113386766LL;
short var_13 = (short)-28911;
int var_14 = -1599287918;
int var_15 = -527439482;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
