#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17145;
int var_2 = -317457443;
long long int var_3 = 3042332880714943817LL;
int zero = 0;
long long int var_17 = -4839907327238179934LL;
signed char var_18 = (signed char)-49;
signed char var_19 = (signed char)45;
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
