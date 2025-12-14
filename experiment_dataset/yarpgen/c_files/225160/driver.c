#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7896870601338739102LL;
unsigned long long int var_5 = 3066059894224447301ULL;
_Bool var_6 = (_Bool)1;
unsigned char var_9 = (unsigned char)165;
unsigned int var_13 = 1559735671U;
int zero = 0;
long long int var_14 = -7708314014271345775LL;
long long int var_15 = 1076408573787103259LL;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
