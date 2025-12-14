#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
signed char var_3 = (signed char)-37;
unsigned short var_4 = (unsigned short)53367;
unsigned short var_6 = (unsigned short)15499;
signed char var_8 = (signed char)-47;
short var_10 = (short)-10897;
int zero = 0;
int var_14 = -558219767;
unsigned short var_15 = (unsigned short)39935;
long long int var_16 = 4686273917446551762LL;
unsigned int var_17 = 2026314031U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
