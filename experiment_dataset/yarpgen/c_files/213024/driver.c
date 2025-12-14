#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17588;
unsigned short var_5 = (unsigned short)62060;
unsigned int var_6 = 3757335671U;
long long int var_7 = 4673511273632049477LL;
unsigned int var_11 = 2601912588U;
int zero = 0;
unsigned long long int var_12 = 3809641537739708118ULL;
short var_13 = (short)-21034;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
