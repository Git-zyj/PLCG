#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3492245650U;
unsigned char var_6 = (unsigned char)236;
int var_12 = 1371614756;
int zero = 0;
long long int var_13 = -3076235832968185526LL;
int var_14 = -1117084106;
long long int var_15 = 5066014565656512104LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
