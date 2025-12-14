#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17522;
long long int var_11 = 6873771126647564692LL;
long long int var_15 = 8927832939594032661LL;
int zero = 0;
unsigned short var_19 = (unsigned short)40970;
long long int var_20 = 2778221056486376224LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
