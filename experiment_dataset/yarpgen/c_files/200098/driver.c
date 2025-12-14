#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1312872995;
unsigned short var_5 = (unsigned short)61483;
long long int var_6 = -8736954664435111790LL;
int zero = 0;
unsigned long long int var_11 = 14790347679234646870ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 1990598164996440398LL;
unsigned char var_14 = (unsigned char)246;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
