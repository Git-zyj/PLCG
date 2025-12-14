#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10578786820192478866ULL;
unsigned short var_7 = (unsigned short)63540;
unsigned short var_8 = (unsigned short)25367;
short var_14 = (short)-11462;
int zero = 0;
unsigned short var_15 = (unsigned short)57916;
unsigned long long int var_16 = 3206907923378846087ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
