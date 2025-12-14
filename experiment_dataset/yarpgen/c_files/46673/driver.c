#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)110;
unsigned long long int var_4 = 6909724395569510894ULL;
long long int var_7 = 6889537929477551594LL;
unsigned char var_8 = (unsigned char)31;
long long int var_10 = 5153477358550521778LL;
long long int var_11 = -2686612639105825071LL;
int zero = 0;
long long int var_12 = 2192099078458517886LL;
unsigned long long int var_13 = 10589116182979663331ULL;
long long int var_14 = -4027868261876522279LL;
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
