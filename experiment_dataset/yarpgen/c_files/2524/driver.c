#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14264884077594846458ULL;
_Bool var_6 = (_Bool)1;
long long int var_7 = -7451083844916291618LL;
short var_10 = (short)-4272;
unsigned long long int var_11 = 7878656144440969252ULL;
int zero = 0;
signed char var_12 = (signed char)3;
int var_13 = 521831296;
void init() {
}

void checksum() {
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
