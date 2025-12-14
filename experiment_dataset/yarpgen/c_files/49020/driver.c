#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7701328318958797166ULL;
long long int var_9 = 4950426123588207870LL;
unsigned short var_12 = (unsigned short)34329;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -6169247513915313963LL;
signed char var_17 = (signed char)117;
unsigned char var_18 = (unsigned char)177;
void init() {
}

void checksum() {
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
