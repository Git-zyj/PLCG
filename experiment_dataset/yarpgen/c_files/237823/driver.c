#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-5358;
unsigned int var_6 = 4086539554U;
long long int var_9 = 4204052214809974540LL;
int var_11 = -142079822;
short var_12 = (short)16136;
int var_14 = 872284928;
int zero = 0;
unsigned char var_16 = (unsigned char)254;
long long int var_17 = -2876835872965344528LL;
unsigned short var_18 = (unsigned short)63874;
unsigned long long int var_19 = 8557307237846413697ULL;
int var_20 = -1814023417;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
