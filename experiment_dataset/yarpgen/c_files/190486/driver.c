#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -258289311;
int var_1 = -3522135;
long long int var_4 = 7430898941524199593LL;
long long int var_5 = -5796262955690808825LL;
int var_6 = -148475935;
int var_7 = -584188681;
int zero = 0;
int var_11 = -1964929039;
int var_12 = -2088276926;
int var_13 = -1876523994;
long long int var_14 = -6205714632349795164LL;
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
