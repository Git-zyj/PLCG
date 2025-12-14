#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38985;
long long int var_8 = 401992036339674198LL;
short var_9 = (short)10590;
int var_12 = -1504792868;
short var_15 = (short)-4227;
int zero = 0;
short var_16 = (short)-19664;
unsigned short var_17 = (unsigned short)10490;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
