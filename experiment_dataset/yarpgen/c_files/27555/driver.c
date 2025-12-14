#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1064556810081649559ULL;
unsigned long long int var_13 = 6832992771097052025ULL;
int zero = 0;
unsigned long long int var_15 = 16848517751146608904ULL;
unsigned long long int var_16 = 14809549510278179730ULL;
unsigned long long int var_17 = 17119884798335396596ULL;
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
