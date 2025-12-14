#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1241965168762160538LL;
int var_3 = -1847990875;
int var_10 = 1303756881;
signed char var_13 = (signed char)108;
int zero = 0;
int var_18 = -109461734;
short var_19 = (short)27009;
int var_20 = -636696114;
unsigned char var_21 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
