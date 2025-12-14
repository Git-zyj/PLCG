#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2706424032U;
unsigned int var_1 = 4216001221U;
unsigned int var_2 = 3182213308U;
unsigned short var_4 = (unsigned short)34495;
unsigned long long int var_5 = 3308851649634417186ULL;
signed char var_7 = (signed char)-101;
int var_9 = 1143470217;
int zero = 0;
unsigned long long int var_10 = 535714399405186875ULL;
unsigned long long int var_11 = 12242548504095184474ULL;
signed char var_12 = (signed char)18;
_Bool var_13 = (_Bool)1;
short var_14 = (short)3590;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
