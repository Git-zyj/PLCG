#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1674364607;
unsigned short var_7 = (unsigned short)22150;
long long int var_9 = -1209633388908064937LL;
unsigned short var_11 = (unsigned short)52304;
int zero = 0;
long long int var_12 = 3119601833699600597LL;
int var_13 = -778962576;
int var_14 = -876749601;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
