#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8845751596258871367LL;
short var_3 = (short)18470;
short var_4 = (short)721;
short var_6 = (short)-26576;
long long int var_7 = 7620449516196555030LL;
short var_11 = (short)-24388;
long long int var_13 = 7589342054536109820LL;
int zero = 0;
long long int var_17 = -4740888101733750994LL;
long long int var_18 = -2136802499376474855LL;
long long int var_19 = 2334226179851423664LL;
long long int var_20 = -1726503321063685712LL;
short var_21 = (short)28146;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
