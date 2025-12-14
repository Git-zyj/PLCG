#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)59144;
long long int var_10 = -5494844727827688892LL;
long long int var_11 = -1778647034763810856LL;
int zero = 0;
unsigned long long int var_18 = 11479215366034752854ULL;
unsigned short var_19 = (unsigned short)650;
long long int var_20 = 8945706919564773310LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
