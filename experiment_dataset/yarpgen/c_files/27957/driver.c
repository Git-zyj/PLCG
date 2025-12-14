#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 850671737;
short var_3 = (short)-12771;
signed char var_8 = (signed char)0;
long long int var_9 = 2853664044221479395LL;
int var_10 = -167790196;
int zero = 0;
int var_11 = 1444118800;
long long int var_12 = -7647898562755453841LL;
void init() {
}

void checksum() {
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
