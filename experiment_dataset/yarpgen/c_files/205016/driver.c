#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)233;
unsigned long long int var_3 = 12439194603996252976ULL;
int var_6 = -156695496;
long long int var_12 = -760031695615685007LL;
int var_13 = 2056466301;
int zero = 0;
short var_19 = (short)25239;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1861850231277869253LL;
int var_22 = 1032591809;
unsigned char var_23 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
