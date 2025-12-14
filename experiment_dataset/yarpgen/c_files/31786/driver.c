#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_13 = -1751147239918995541LL;
unsigned short var_14 = (unsigned short)3985;
int zero = 0;
unsigned char var_18 = (unsigned char)172;
unsigned long long int var_19 = 8794177082228245754ULL;
unsigned long long int var_20 = 3088591252785499742ULL;
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
