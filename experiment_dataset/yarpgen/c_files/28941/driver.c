#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14075;
unsigned short var_6 = (unsigned short)41097;
long long int var_7 = -2524516716871258761LL;
int var_9 = -1862104600;
int zero = 0;
int var_12 = -2129397084;
unsigned short var_13 = (unsigned short)28189;
long long int var_14 = 7350551551141722631LL;
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
