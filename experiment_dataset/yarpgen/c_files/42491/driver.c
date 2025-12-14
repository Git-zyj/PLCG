#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7102;
short var_3 = (short)-4543;
short var_8 = (short)-28280;
unsigned long long int var_10 = 14456957255732468633ULL;
short var_12 = (short)2318;
unsigned long long int var_19 = 4615475924961241284ULL;
int zero = 0;
unsigned long long int var_20 = 7381846191155834622ULL;
unsigned long long int var_21 = 1874487043686706807ULL;
short var_22 = (short)19088;
short var_23 = (short)-6064;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
