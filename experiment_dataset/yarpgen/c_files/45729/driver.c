#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)23;
unsigned short var_10 = (unsigned short)28486;
long long int var_12 = 1568170234590399947LL;
unsigned long long int var_13 = 10982012365763553814ULL;
int zero = 0;
int var_14 = -1128416370;
unsigned int var_15 = 1154380259U;
long long int var_16 = 5759670226144950057LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
