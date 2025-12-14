#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned short var_4 = (unsigned short)10248;
long long int var_5 = 5233238863650838240LL;
short var_9 = (short)-9260;
signed char var_12 = (signed char)84;
unsigned char var_13 = (unsigned char)220;
int zero = 0;
signed char var_14 = (signed char)64;
signed char var_15 = (signed char)59;
void init() {
}

void checksum() {
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
