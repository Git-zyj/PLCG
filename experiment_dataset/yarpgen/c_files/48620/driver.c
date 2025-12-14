#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26429;
int var_1 = 511056399;
long long int var_3 = 5038763245007152080LL;
signed char var_5 = (signed char)47;
unsigned int var_6 = 1543125570U;
int var_7 = -1685757679;
long long int var_9 = -3240562449820232545LL;
int zero = 0;
unsigned short var_13 = (unsigned short)64600;
unsigned long long int var_14 = 2518051181717975070ULL;
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
