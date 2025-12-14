#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2040987445;
long long int var_4 = 9196241797718609462LL;
long long int var_5 = -3782366589472581163LL;
int var_6 = 64374713;
long long int var_7 = -2147142969795728843LL;
long long int var_11 = -1706111294558052270LL;
int var_13 = -1414701878;
int zero = 0;
int var_18 = 2035601819;
int var_19 = -1729391693;
void init() {
}

void checksum() {
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
