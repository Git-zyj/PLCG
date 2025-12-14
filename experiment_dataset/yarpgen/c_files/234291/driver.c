#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)192;
long long int var_7 = 558718646418884837LL;
unsigned long long int var_12 = 10376843766504251619ULL;
long long int var_13 = -3325319931520690685LL;
unsigned char var_15 = (unsigned char)124;
int zero = 0;
short var_18 = (short)-9655;
int var_19 = -342238362;
signed char var_20 = (signed char)23;
short var_21 = (short)18255;
short var_22 = (short)23417;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
