#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 11546933013334689078ULL;
long long int var_6 = 2027584063321262264LL;
unsigned short var_9 = (unsigned short)61672;
unsigned long long int var_11 = 4260931275236486986ULL;
int zero = 0;
int var_13 = -546807407;
_Bool var_14 = (_Bool)1;
long long int var_15 = -2860815856451304831LL;
void init() {
}

void checksum() {
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
