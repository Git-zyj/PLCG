#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -4648529833241977828LL;
long long int var_11 = 5427040966629197743LL;
int zero = 0;
long long int var_13 = -6716235385882512509LL;
unsigned short var_14 = (unsigned short)45059;
unsigned int var_15 = 466104893U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
