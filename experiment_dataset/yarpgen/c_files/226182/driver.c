#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8934505186172823233LL;
long long int var_11 = -5879631057777528596LL;
unsigned char var_12 = (unsigned char)80;
int zero = 0;
short var_16 = (short)10993;
unsigned long long int var_17 = 7116217124762659990ULL;
long long int var_18 = -7402549552602490831LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
