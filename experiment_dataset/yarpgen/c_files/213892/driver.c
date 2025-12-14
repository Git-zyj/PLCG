#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1587261981533619165LL;
signed char var_1 = (signed char)91;
unsigned long long int var_4 = 11309732755835025441ULL;
unsigned long long int var_8 = 10232651257020507960ULL;
unsigned long long int var_10 = 507067658876977804ULL;
int zero = 0;
unsigned long long int var_11 = 17036215783130825265ULL;
unsigned long long int var_12 = 9589792879764531841ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
