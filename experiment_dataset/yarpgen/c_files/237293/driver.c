#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 518776113U;
short var_1 = (short)-30172;
unsigned int var_6 = 217253954U;
short var_13 = (short)12579;
short var_14 = (short)-4044;
int zero = 0;
unsigned short var_15 = (unsigned short)60792;
unsigned long long int var_16 = 17813357888168160923ULL;
short var_17 = (short)-3099;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
