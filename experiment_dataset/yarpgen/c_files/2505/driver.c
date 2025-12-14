#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15409;
long long int var_3 = 130719263634514221LL;
_Bool var_4 = (_Bool)1;
short var_5 = (short)29617;
short var_6 = (short)9731;
_Bool var_7 = (_Bool)1;
long long int var_10 = -6663726659641505476LL;
int zero = 0;
int var_11 = 419461326;
unsigned char var_12 = (unsigned char)43;
long long int var_13 = -748964621965837618LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
