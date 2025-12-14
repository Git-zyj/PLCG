#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6147716986379167111LL;
long long int var_5 = -173630429484278160LL;
int zero = 0;
unsigned long long int var_18 = 14437969562467070625ULL;
unsigned short var_19 = (unsigned short)22088;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
