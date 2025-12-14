#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2467531123U;
int var_3 = 1348417980;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)82;
unsigned int var_12 = 4197543084U;
signed char var_13 = (signed char)-23;
int zero = 0;
long long int var_16 = 6874811305867037507LL;
long long int var_17 = -4061561284391183799LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
