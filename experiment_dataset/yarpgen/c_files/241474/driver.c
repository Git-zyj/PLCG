#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14774082060172195712ULL;
unsigned long long int var_1 = 8960881394941224290ULL;
signed char var_3 = (signed char)25;
unsigned char var_4 = (unsigned char)72;
long long int var_5 = -504105370017494578LL;
signed char var_6 = (signed char)23;
short var_9 = (short)-20484;
int zero = 0;
signed char var_12 = (signed char)16;
unsigned int var_13 = 3802623766U;
int var_14 = 146428161;
void init() {
}

void checksum() {
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
