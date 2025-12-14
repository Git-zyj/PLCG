#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18133801109555364682ULL;
int var_7 = -200018144;
unsigned char var_9 = (unsigned char)132;
unsigned long long int var_13 = 8297547962140548759ULL;
int zero = 0;
int var_14 = 1202409192;
int var_15 = 19629392;
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
