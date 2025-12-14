#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60855;
int var_7 = 398863498;
long long int var_8 = 3920021988549854833LL;
unsigned int var_9 = 1685090147U;
int zero = 0;
short var_19 = (short)18396;
unsigned int var_20 = 1590861874U;
long long int var_21 = 6687120211377506116LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
