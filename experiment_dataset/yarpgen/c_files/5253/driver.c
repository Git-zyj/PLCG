#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 2364832422390679794ULL;
long long int var_6 = 3590739021666746457LL;
unsigned char var_8 = (unsigned char)160;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_12 = -1030486186;
short var_13 = (short)-23169;
short var_14 = (short)-16794;
int var_15 = 1658249961;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
