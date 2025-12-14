#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)243;
unsigned short var_2 = (unsigned short)3338;
unsigned short var_4 = (unsigned short)5710;
int var_8 = 393806025;
int zero = 0;
long long int var_11 = 2417396692934669511LL;
unsigned short var_12 = (unsigned short)43838;
unsigned char var_13 = (unsigned char)66;
unsigned int var_14 = 3955632052U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
