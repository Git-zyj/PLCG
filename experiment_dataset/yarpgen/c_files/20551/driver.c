#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2908058709471739599LL;
unsigned short var_5 = (unsigned short)23354;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)18389;
int var_11 = -607244827;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
