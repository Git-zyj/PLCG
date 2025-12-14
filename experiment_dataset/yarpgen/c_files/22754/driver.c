#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
signed char var_6 = (signed char)67;
signed char var_7 = (signed char)21;
int var_8 = -1786773026;
unsigned long long int var_9 = 5445679597861156103ULL;
int var_11 = -1798833078;
int zero = 0;
unsigned long long int var_20 = 1295638232278393639ULL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-70;
unsigned long long int var_23 = 3117741552685536981ULL;
unsigned long long int var_24 = 12563680696485572889ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
