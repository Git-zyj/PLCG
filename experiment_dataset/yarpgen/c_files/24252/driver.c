#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)59696;
unsigned char var_9 = (unsigned char)214;
long long int var_15 = 4310538121182190144LL;
int zero = 0;
signed char var_17 = (signed char)-25;
unsigned short var_18 = (unsigned short)860;
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
