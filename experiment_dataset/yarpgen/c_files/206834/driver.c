#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)223;
long long int var_11 = -2178532296610899943LL;
int var_15 = 1367264105;
signed char var_16 = (signed char)104;
signed char var_17 = (signed char)-80;
int zero = 0;
unsigned int var_18 = 461491588U;
int var_19 = -1316975699;
int var_20 = -636567227;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
