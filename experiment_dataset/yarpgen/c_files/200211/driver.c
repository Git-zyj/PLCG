#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1000091161;
int var_4 = -1810653779;
signed char var_5 = (signed char)66;
unsigned int var_8 = 1415263265U;
long long int var_9 = 7995206654821873912LL;
unsigned long long int var_10 = 16105373031336584318ULL;
int zero = 0;
unsigned long long int var_14 = 1766987722134443553ULL;
unsigned long long int var_15 = 10127778880499083105ULL;
unsigned short var_16 = (unsigned short)3992;
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
