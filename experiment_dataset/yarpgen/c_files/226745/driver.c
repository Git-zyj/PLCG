#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)51;
unsigned short var_8 = (unsigned short)28140;
unsigned short var_9 = (unsigned short)39873;
int zero = 0;
unsigned short var_11 = (unsigned short)29520;
unsigned short var_12 = (unsigned short)32060;
unsigned short var_13 = (unsigned short)54109;
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
