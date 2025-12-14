#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)20353;
int var_16 = -1881428507;
int zero = 0;
unsigned long long int var_17 = 14013540119347813848ULL;
int var_18 = 153003053;
signed char var_19 = (signed char)-98;
long long int var_20 = -4475387954924579215LL;
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
