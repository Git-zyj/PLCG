#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-124;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-14323;
signed char var_5 = (signed char)94;
unsigned long long int var_9 = 15582204379615947329ULL;
unsigned int var_10 = 338012163U;
int zero = 0;
long long int var_14 = -7481419864810888303LL;
unsigned long long int var_15 = 6216673130514785036ULL;
unsigned long long int var_16 = 5304580480747747189ULL;
signed char var_17 = (signed char)-102;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
