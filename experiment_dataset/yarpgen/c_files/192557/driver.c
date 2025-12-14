#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)13809;
short var_6 = (short)6224;
long long int var_9 = -8698985707256744661LL;
unsigned long long int var_10 = 12550858144466151505ULL;
long long int var_14 = 7234972667698690018LL;
unsigned long long int var_17 = 3044731346655601698ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)43215;
long long int var_20 = 3096573497423862351LL;
void init() {
}

void checksum() {
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
