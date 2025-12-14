#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -195725465;
long long int var_11 = 5707197994155801481LL;
int zero = 0;
long long int var_14 = -8006546505215539096LL;
unsigned char var_15 = (unsigned char)117;
long long int var_16 = -9079238511039451592LL;
void init() {
}

void checksum() {
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
