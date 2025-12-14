#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9127846844438358708LL;
signed char var_5 = (signed char)-33;
unsigned long long int var_6 = 13177671662334366433ULL;
unsigned short var_7 = (unsigned short)373;
short var_8 = (short)6457;
short var_9 = (short)-29664;
int zero = 0;
int var_11 = -714589173;
unsigned long long int var_12 = 3279295280175624868ULL;
int var_13 = 666831846;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
