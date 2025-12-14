#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2112821580070583064LL;
unsigned short var_7 = (unsigned short)43063;
long long int var_11 = 8277291951376903140LL;
int zero = 0;
unsigned char var_15 = (unsigned char)154;
long long int var_16 = -1004433717188666881LL;
unsigned char var_17 = (unsigned char)82;
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
