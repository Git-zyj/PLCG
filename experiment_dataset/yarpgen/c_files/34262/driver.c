#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1211171413;
unsigned char var_5 = (unsigned char)145;
long long int var_8 = 6384539902078627861LL;
int zero = 0;
unsigned long long int var_11 = 15676528228900517574ULL;
unsigned int var_12 = 3073054116U;
signed char var_13 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
