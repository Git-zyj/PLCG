#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3295102548U;
unsigned int var_3 = 1188154942U;
unsigned long long int var_11 = 2789664681190199011ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)147;
unsigned short var_13 = (unsigned short)14294;
unsigned long long int var_14 = 7692473538553878860ULL;
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
