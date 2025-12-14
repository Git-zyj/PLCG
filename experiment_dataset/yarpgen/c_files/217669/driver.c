#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 185318142914812929LL;
unsigned int var_17 = 4045017139U;
int var_18 = -331339421;
unsigned char var_19 = (unsigned char)184;
int zero = 0;
unsigned long long int var_20 = 12350693909830901700ULL;
unsigned int var_21 = 571413927U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
