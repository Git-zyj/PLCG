#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44716;
unsigned short var_2 = (unsigned short)50798;
unsigned short var_9 = (unsigned short)54352;
unsigned short var_12 = (unsigned short)15656;
int zero = 0;
long long int var_13 = 2313879218258300036LL;
signed char var_14 = (signed char)-31;
void init() {
}

void checksum() {
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
