#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-47;
long long int var_6 = 3262366431586171343LL;
unsigned char var_7 = (unsigned char)187;
int var_8 = -1093433452;
unsigned int var_9 = 994876793U;
unsigned char var_10 = (unsigned char)52;
signed char var_14 = (signed char)16;
int zero = 0;
int var_15 = 140936892;
short var_16 = (short)-31820;
void init() {
}

void checksum() {
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
