#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)25009;
unsigned char var_7 = (unsigned char)64;
long long int var_10 = 3250631682601941844LL;
int zero = 0;
int var_13 = -867992525;
unsigned long long int var_14 = 14392624991674637500ULL;
void init() {
}

void checksum() {
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
