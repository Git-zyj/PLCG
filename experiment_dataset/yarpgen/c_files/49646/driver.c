#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 3795598623375274412ULL;
long long int var_8 = 3066759811390323541LL;
unsigned char var_14 = (unsigned char)67;
int zero = 0;
unsigned long long int var_15 = 16555560947835435831ULL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3059550696U;
long long int var_18 = 5755704705733058540LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
