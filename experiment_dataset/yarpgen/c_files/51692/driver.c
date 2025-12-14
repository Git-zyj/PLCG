#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)42;
unsigned short var_3 = (unsigned short)46887;
unsigned long long int var_4 = 4478726369508671980ULL;
unsigned char var_7 = (unsigned char)188;
int zero = 0;
short var_12 = (short)-23551;
_Bool var_13 = (_Bool)0;
int var_14 = 1359929236;
unsigned long long int var_15 = 18113847413446196395ULL;
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
