#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1500662316;
int var_1 = -1967113457;
unsigned int var_2 = 3822646614U;
signed char var_3 = (signed char)72;
unsigned int var_8 = 3672205837U;
unsigned int var_10 = 3950337365U;
int var_11 = -20215002;
short var_12 = (short)-5303;
int zero = 0;
unsigned long long int var_13 = 17093345780891680821ULL;
unsigned int var_14 = 419648406U;
unsigned int var_15 = 2840259573U;
unsigned int var_16 = 409531821U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
