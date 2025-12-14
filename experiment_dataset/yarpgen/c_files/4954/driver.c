#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4905451063246963534ULL;
unsigned long long int var_7 = 2925968299220431396ULL;
unsigned short var_8 = (unsigned short)4588;
unsigned char var_9 = (unsigned char)157;
signed char var_10 = (signed char)104;
int zero = 0;
unsigned short var_11 = (unsigned short)62825;
long long int var_12 = -843457848060341365LL;
unsigned long long int var_13 = 16889882490393182832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
