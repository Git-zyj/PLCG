#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-102;
unsigned long long int var_8 = 9497207918990535730ULL;
long long int var_10 = 6851948970991611416LL;
long long int var_18 = 2629342587713136034LL;
int zero = 0;
unsigned short var_19 = (unsigned short)46991;
unsigned char var_20 = (unsigned char)89;
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
