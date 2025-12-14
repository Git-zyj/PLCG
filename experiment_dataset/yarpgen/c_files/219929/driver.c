#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2098046293;
int var_1 = 1712032882;
short var_3 = (short)25262;
long long int var_8 = 5827362256234159043LL;
unsigned char var_9 = (unsigned char)204;
int zero = 0;
unsigned int var_10 = 1161231930U;
int var_11 = 1607230451;
unsigned int var_12 = 2649644367U;
int var_13 = -1742338145;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
