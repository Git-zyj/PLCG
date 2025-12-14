#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-24;
short var_3 = (short)22817;
unsigned short var_11 = (unsigned short)17779;
signed char var_15 = (signed char)-77;
long long int var_16 = 2944371911932116570LL;
int zero = 0;
unsigned short var_17 = (unsigned short)51688;
signed char var_18 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
