#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 205739989;
long long int var_2 = 1252057842009637062LL;
int var_5 = 855254135;
signed char var_7 = (signed char)-92;
unsigned char var_9 = (unsigned char)246;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 15044291846933629089ULL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
