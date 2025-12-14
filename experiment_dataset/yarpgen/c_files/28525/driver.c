#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4688377030940428784LL;
int var_3 = 794260117;
unsigned short var_9 = (unsigned short)25054;
int zero = 0;
long long int var_15 = -7660342291194545074LL;
signed char var_16 = (signed char)-66;
unsigned long long int var_17 = 3753568799288704238ULL;
unsigned char var_18 = (unsigned char)160;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
