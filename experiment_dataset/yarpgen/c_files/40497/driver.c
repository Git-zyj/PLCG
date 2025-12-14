#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)181;
int var_1 = -1700988694;
short var_5 = (short)22331;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
unsigned long long int var_15 = 3365081045582379622ULL;
unsigned char var_16 = (unsigned char)255;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
