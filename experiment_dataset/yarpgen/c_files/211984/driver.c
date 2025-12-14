#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7482980348507933546LL;
int var_3 = -289763191;
signed char var_4 = (signed char)31;
int var_6 = -496583808;
unsigned int var_12 = 1727616449U;
signed char var_15 = (signed char)90;
int zero = 0;
unsigned short var_19 = (unsigned short)26278;
long long int var_20 = -2572731456885665709LL;
unsigned int var_21 = 3448417661U;
short var_22 = (short)4362;
unsigned long long int var_23 = 2341074667541875740ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
