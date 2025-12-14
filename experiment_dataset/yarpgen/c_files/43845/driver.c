#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1247760381038475993LL;
unsigned short var_7 = (unsigned short)55206;
signed char var_8 = (signed char)19;
signed char var_10 = (signed char)37;
unsigned short var_12 = (unsigned short)59057;
int zero = 0;
long long int var_16 = -7899928938280600727LL;
unsigned short var_17 = (unsigned short)61816;
unsigned char var_18 = (unsigned char)230;
void init() {
}

void checksum() {
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
