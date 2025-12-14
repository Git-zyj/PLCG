#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2084893428;
long long int var_6 = 1387753080811811666LL;
long long int var_8 = -7654955929435180996LL;
unsigned short var_11 = (unsigned short)27139;
int zero = 0;
int var_15 = -1281349786;
short var_16 = (short)23011;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
