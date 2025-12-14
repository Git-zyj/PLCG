#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 4792640779855552423LL;
unsigned long long int var_13 = 10578277646129850261ULL;
unsigned short var_14 = (unsigned short)60355;
int zero = 0;
short var_18 = (short)16730;
int var_19 = -1681551840;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
