#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64971;
unsigned long long int var_3 = 14844207833593137741ULL;
long long int var_5 = 8933701717961236613LL;
int zero = 0;
unsigned int var_18 = 2836624108U;
int var_19 = -1091750917;
void init() {
}

void checksum() {
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
