#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4268287535108031843LL;
unsigned int var_2 = 897923971U;
long long int var_4 = 6643733697392003905LL;
short var_7 = (short)13624;
long long int var_10 = 261283082349264128LL;
int zero = 0;
unsigned char var_16 = (unsigned char)74;
unsigned char var_17 = (unsigned char)109;
int var_18 = 1987663571;
long long int var_19 = -8376643235752305617LL;
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
