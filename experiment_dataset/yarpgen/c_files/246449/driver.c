#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16343996247164854382ULL;
long long int var_4 = -7471870307230717122LL;
short var_13 = (short)28737;
long long int var_16 = -9046561468861072761LL;
int zero = 0;
unsigned long long int var_17 = 18029658474721235831ULL;
unsigned int var_18 = 220133576U;
long long int var_19 = -2286982610285047158LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
