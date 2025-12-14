#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4856301594430418276LL;
long long int var_6 = 408559684286152433LL;
unsigned long long int var_12 = 15053947941285468016ULL;
int zero = 0;
short var_16 = (short)7299;
unsigned short var_17 = (unsigned short)9411;
unsigned long long int var_18 = 3701171514540998910ULL;
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
