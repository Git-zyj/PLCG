#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7994866222773375646LL;
long long int var_9 = -2761796505225018440LL;
long long int var_11 = 5313492091562519814LL;
int zero = 0;
unsigned long long int var_18 = 9037729363458728496ULL;
unsigned char var_19 = (unsigned char)242;
long long int var_20 = -5979843066930461648LL;
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
