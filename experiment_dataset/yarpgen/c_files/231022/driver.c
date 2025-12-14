#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -652995610446877916LL;
long long int var_4 = 8344207865690114827LL;
signed char var_6 = (signed char)-37;
unsigned short var_9 = (unsigned short)52546;
unsigned long long int var_12 = 2800794310329775169ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)18829;
unsigned long long int var_17 = 1270524920296643309ULL;
unsigned char var_18 = (unsigned char)44;
long long int var_19 = -8123643958358327901LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
