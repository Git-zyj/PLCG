#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5856254390079643407LL;
unsigned int var_13 = 1070770983U;
short var_14 = (short)-30870;
int zero = 0;
long long int var_15 = -1849533380302694847LL;
short var_16 = (short)22991;
unsigned long long int var_17 = 17744930409026362675ULL;
long long int var_18 = -895892012947043718LL;
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
