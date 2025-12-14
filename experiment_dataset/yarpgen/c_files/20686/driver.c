#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17723709364751859776ULL;
unsigned long long int var_7 = 17667994197237565177ULL;
unsigned long long int var_12 = 11662198245807536611ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)51211;
unsigned long long int var_15 = 10009396844232734862ULL;
unsigned long long int var_16 = 17751627834967808733ULL;
unsigned long long int var_17 = 18276547857590988061ULL;
unsigned long long int var_18 = 9564748554847107952ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
