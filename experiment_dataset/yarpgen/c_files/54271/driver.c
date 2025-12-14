#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)33891;
unsigned long long int var_10 = 9303280107097651181ULL;
long long int var_13 = -9091528600517158421LL;
int zero = 0;
unsigned long long int var_20 = 2682573053886666233ULL;
long long int var_21 = 5768677840783402907LL;
unsigned long long int var_22 = 18215571112620415063ULL;
void init() {
}

void checksum() {
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
