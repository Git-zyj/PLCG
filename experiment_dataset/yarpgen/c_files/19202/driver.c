#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = 6313898825251041041LL;
unsigned char var_14 = (unsigned char)223;
int zero = 0;
unsigned long long int var_17 = 6921558982196102014ULL;
long long int var_18 = -6075197424186756135LL;
short var_19 = (short)30549;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
