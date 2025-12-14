#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 912904487U;
unsigned short var_3 = (unsigned short)55210;
long long int var_4 = 29174622036839773LL;
int zero = 0;
unsigned char var_10 = (unsigned char)59;
long long int var_11 = -6743153742002911119LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
