#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -372147363354088836LL;
long long int var_12 = -1310653468604041274LL;
unsigned char var_17 = (unsigned char)56;
unsigned int var_18 = 3171206227U;
int zero = 0;
long long int var_20 = -8713693884545095193LL;
unsigned long long int var_21 = 17209204354073819318ULL;
unsigned long long int var_22 = 6693602618866790331ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
