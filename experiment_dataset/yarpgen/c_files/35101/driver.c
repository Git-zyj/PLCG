#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -468187783;
long long int var_2 = 786753742281823844LL;
int var_3 = -11382;
unsigned long long int var_4 = 3361846451303273495ULL;
long long int var_5 = 4383351010109801876LL;
long long int var_8 = 3590581326723451682LL;
unsigned long long int var_10 = 1462037670856605491ULL;
int zero = 0;
short var_12 = (short)-9303;
long long int var_13 = -4497313395284388244LL;
long long int var_14 = 3167320287193106378LL;
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
