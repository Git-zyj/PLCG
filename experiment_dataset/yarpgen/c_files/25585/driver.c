#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2140148196;
unsigned int var_7 = 309047591U;
unsigned long long int var_9 = 791414649001586831ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)39999;
unsigned long long int var_14 = 2444477611470822927ULL;
unsigned int var_15 = 1317350428U;
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
