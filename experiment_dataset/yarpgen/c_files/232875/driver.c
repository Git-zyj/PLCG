#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3186280505081962832LL;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_6 = -182218419;
unsigned char var_9 = (unsigned char)226;
unsigned char var_10 = (unsigned char)147;
int zero = 0;
unsigned char var_11 = (unsigned char)110;
unsigned char var_12 = (unsigned char)101;
unsigned long long int var_13 = 10231009490964229118ULL;
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
