#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3500280536414107763LL;
unsigned short var_10 = (unsigned short)40742;
int zero = 0;
unsigned short var_17 = (unsigned short)26104;
short var_18 = (short)23243;
long long int var_19 = -3349613463972243881LL;
void init() {
}

void checksum() {
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
