#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17665692128677186232ULL;
unsigned int var_4 = 427590630U;
int var_7 = 81047829;
int zero = 0;
unsigned long long int var_12 = 11238142737492190361ULL;
unsigned char var_13 = (unsigned char)82;
long long int var_14 = 4177927564042983475LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
