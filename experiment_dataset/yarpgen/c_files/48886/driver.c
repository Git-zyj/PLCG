#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 546619826;
int var_1 = 258388118;
int var_2 = -1480758508;
int var_3 = -1767890516;
int var_4 = 735698902;
int var_5 = 1483268672;
int var_6 = 1969785288;
int var_8 = -1519709643;
int var_11 = 1282814341;
int var_12 = 1536887543;
int var_13 = 1197304998;
int var_15 = -159938945;
int var_17 = -128829082;
int var_18 = -722940222;
int zero = 0;
int var_19 = -2039387883;
int var_20 = 1912975619;
int var_21 = 1033042730;
int var_22 = -1703903947;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
