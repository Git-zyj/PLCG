#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 177364718U;
unsigned long long int var_4 = 9417917780458981860ULL;
short var_9 = (short)26593;
int zero = 0;
long long int var_13 = -9033431127774952709LL;
long long int var_14 = -2418124845358539519LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
