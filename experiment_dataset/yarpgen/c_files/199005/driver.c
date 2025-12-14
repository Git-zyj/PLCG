#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3557148433836132848LL;
int var_7 = -1456876541;
short var_8 = (short)10153;
int zero = 0;
unsigned short var_16 = (unsigned short)27978;
int var_17 = -468428920;
short var_18 = (short)-21268;
void init() {
}

void checksum() {
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
