#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25962;
unsigned long long int var_6 = 2493877012101049070ULL;
signed char var_7 = (signed char)-23;
int zero = 0;
unsigned short var_14 = (unsigned short)16961;
long long int var_15 = -2435859569841967896LL;
void init() {
}

void checksum() {
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
