#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-418;
short var_2 = (short)-29695;
unsigned long long int var_3 = 12265519088214606531ULL;
short var_8 = (short)-32540;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-4556;
int zero = 0;
long long int var_19 = 8787801517779229414LL;
int var_20 = -1857514238;
short var_21 = (short)577;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
