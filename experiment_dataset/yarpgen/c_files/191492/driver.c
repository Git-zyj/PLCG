#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
signed char var_2 = (signed char)-12;
signed char var_3 = (signed char)66;
long long int var_11 = 5566244077245594753LL;
short var_12 = (short)28012;
int zero = 0;
long long int var_13 = 6338340990369957946LL;
long long int var_14 = 5985141070348650932LL;
signed char var_15 = (signed char)-108;
void init() {
}

void checksum() {
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
