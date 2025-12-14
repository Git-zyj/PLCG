#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 945646453;
unsigned char var_8 = (unsigned char)26;
long long int var_12 = -9140930753963460317LL;
short var_13 = (short)-970;
int zero = 0;
int var_18 = -1139076814;
long long int var_19 = 4578077000202562803LL;
int var_20 = -1500529025;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
