#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10600859281694430103ULL;
unsigned int var_8 = 3231219657U;
unsigned char var_13 = (unsigned char)214;
long long int var_14 = 6530614413375465825LL;
int zero = 0;
int var_15 = -978523862;
long long int var_16 = 95109060677026944LL;
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
