#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-40;
long long int var_12 = 670024314247488542LL;
signed char var_14 = (signed char)-75;
int zero = 0;
unsigned char var_15 = (unsigned char)18;
long long int var_16 = -6342380549774083155LL;
unsigned int var_17 = 1241133221U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
