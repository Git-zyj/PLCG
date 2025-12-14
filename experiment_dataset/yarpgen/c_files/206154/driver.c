#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -384116815;
int var_3 = -2069529288;
signed char var_4 = (signed char)-15;
unsigned char var_7 = (unsigned char)203;
signed char var_8 = (signed char)-64;
unsigned int var_9 = 3895901647U;
int zero = 0;
long long int var_10 = 3917608465309730725LL;
unsigned long long int var_11 = 13793090503612295367ULL;
long long int var_12 = 6203854178753717248LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
