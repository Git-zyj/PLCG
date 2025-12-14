#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7291374741634856959ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 18002954390201385037ULL;
short var_8 = (short)20794;
signed char var_9 = (signed char)-84;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -9056997787549224612LL;
int var_12 = -1285201617;
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
