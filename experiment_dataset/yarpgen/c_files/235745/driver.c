#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1890326679;
long long int var_13 = -591264481851910588LL;
unsigned char var_14 = (unsigned char)189;
unsigned long long int var_17 = 3715844102649634915ULL;
int zero = 0;
long long int var_20 = 5468517707621665359LL;
unsigned short var_21 = (unsigned short)49486;
unsigned short var_22 = (unsigned short)20531;
short var_23 = (short)14655;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
