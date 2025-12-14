#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)88;
unsigned char var_3 = (unsigned char)251;
unsigned char var_7 = (unsigned char)92;
long long int var_9 = -6083233640770459377LL;
int zero = 0;
unsigned short var_13 = (unsigned short)10982;
long long int var_14 = -1682959427995922892LL;
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
