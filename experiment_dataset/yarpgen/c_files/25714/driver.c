#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6997343741369956315LL;
unsigned char var_2 = (unsigned char)162;
unsigned char var_4 = (unsigned char)77;
unsigned long long int var_9 = 14707124857379636966ULL;
unsigned long long int var_11 = 3374330279676779979ULL;
unsigned char var_13 = (unsigned char)117;
unsigned char var_15 = (unsigned char)42;
unsigned int var_18 = 2549405443U;
int zero = 0;
unsigned char var_19 = (unsigned char)36;
int var_20 = 1815975558;
unsigned int var_21 = 1058475908U;
unsigned int var_22 = 642989255U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
