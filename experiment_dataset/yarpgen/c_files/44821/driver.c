#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)95;
unsigned short var_9 = (unsigned short)35978;
unsigned short var_14 = (unsigned short)16960;
int var_18 = -1816741826;
int zero = 0;
long long int var_19 = -6260817272755951871LL;
unsigned char var_20 = (unsigned char)162;
unsigned long long int var_21 = 7468391893473036648ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
