#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22641;
int var_3 = -105500004;
int var_4 = -1610986813;
int var_6 = 479053820;
int var_13 = 637233696;
short var_14 = (short)19635;
short var_16 = (short)-20243;
int var_17 = 1168604569;
int zero = 0;
int var_19 = -1947325194;
int var_20 = -1970984577;
short var_21 = (short)-20736;
unsigned char var_22 = (unsigned char)169;
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
