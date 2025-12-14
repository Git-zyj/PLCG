#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 825748167;
signed char var_5 = (signed char)-21;
long long int var_9 = -1855976581923791891LL;
signed char var_11 = (signed char)113;
int zero = 0;
int var_12 = 1623465180;
signed char var_13 = (signed char)71;
unsigned short var_14 = (unsigned short)39092;
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
