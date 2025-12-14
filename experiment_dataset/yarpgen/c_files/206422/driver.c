#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -689900357;
unsigned short var_9 = (unsigned short)61281;
unsigned long long int var_10 = 8100056713621410104ULL;
unsigned long long int var_11 = 15135619569923940525ULL;
short var_12 = (short)8207;
unsigned short var_13 = (unsigned short)32233;
int zero = 0;
unsigned long long int var_15 = 4681992546556714788ULL;
unsigned short var_16 = (unsigned short)46585;
int var_17 = -754698871;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
