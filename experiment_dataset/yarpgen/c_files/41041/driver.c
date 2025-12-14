#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 160055303506958634LL;
unsigned long long int var_5 = 11666527501323944508ULL;
signed char var_11 = (signed char)-73;
int zero = 0;
unsigned long long int var_14 = 17075349649798510626ULL;
unsigned short var_15 = (unsigned short)35996;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
