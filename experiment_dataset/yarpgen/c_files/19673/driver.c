#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
signed char var_3 = (signed char)44;
int var_6 = 2082918278;
signed char var_8 = (signed char)-124;
signed char var_10 = (signed char)-85;
int zero = 0;
unsigned short var_12 = (unsigned short)32166;
int var_13 = -1971604651;
unsigned long long int var_14 = 7218994663303751316ULL;
unsigned long long int var_15 = 7984792385815500338ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
