#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4456;
unsigned long long int var_2 = 5227916658343882106ULL;
unsigned long long int var_5 = 6595669139024312561ULL;
unsigned long long int var_8 = 7126075911427146908ULL;
unsigned long long int var_10 = 9495738191156092703ULL;
short var_12 = (short)18429;
int zero = 0;
short var_13 = (short)20130;
short var_14 = (short)12665;
unsigned long long int var_15 = 16946562107386697386ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
