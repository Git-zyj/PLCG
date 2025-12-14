#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6558148836366066968LL;
short var_3 = (short)-4210;
unsigned char var_8 = (unsigned char)7;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)11618;
long long int var_12 = 4216327732162330762LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
