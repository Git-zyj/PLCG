#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5700191485830044976LL;
unsigned long long int var_5 = 6893051056847823071ULL;
unsigned long long int var_7 = 6027956851325785932ULL;
unsigned int var_9 = 919940554U;
unsigned long long int var_11 = 14900905786481377923ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)56840;
unsigned short var_13 = (unsigned short)43705;
unsigned int var_14 = 3067412529U;
long long int var_15 = 798369324058693928LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
