#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1572513907;
unsigned short var_1 = (unsigned short)4656;
unsigned short var_9 = (unsigned short)51434;
int zero = 0;
long long int var_12 = 6381956478495853512LL;
long long int var_13 = 8790690865812494189LL;
unsigned short var_14 = (unsigned short)17216;
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
