#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29152;
int var_3 = 1451732814;
unsigned long long int var_5 = 2543629401656216738ULL;
short var_6 = (short)-8791;
short var_8 = (short)20719;
unsigned long long int var_9 = 17102248471532535400ULL;
int zero = 0;
unsigned int var_13 = 3576041755U;
unsigned long long int var_14 = 18315932005482039221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
