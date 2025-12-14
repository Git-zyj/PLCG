#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)181;
long long int var_3 = -8683738626875247268LL;
unsigned short var_7 = (unsigned short)20582;
unsigned short var_9 = (unsigned short)61048;
int zero = 0;
long long int var_17 = 7365716983607792746LL;
unsigned short var_18 = (unsigned short)25392;
void init() {
}

void checksum() {
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
