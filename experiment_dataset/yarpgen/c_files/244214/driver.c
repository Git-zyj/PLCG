#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)15274;
unsigned char var_8 = (unsigned char)224;
int var_9 = -2046064357;
unsigned char var_10 = (unsigned char)120;
long long int var_13 = -4104742071070300260LL;
int zero = 0;
long long int var_16 = -8336790595514865417LL;
signed char var_17 = (signed char)121;
void init() {
}

void checksum() {
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
