#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 6524648085872294040ULL;
long long int var_13 = -4008964990862534511LL;
unsigned short var_16 = (unsigned short)11557;
int zero = 0;
int var_17 = -845231547;
signed char var_18 = (signed char)48;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
