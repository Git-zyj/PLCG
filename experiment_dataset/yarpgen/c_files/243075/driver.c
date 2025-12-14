#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
long long int var_2 = -5043050136512491190LL;
long long int var_4 = 9221468246952286823LL;
unsigned long long int var_5 = 15435372184966812910ULL;
long long int var_8 = -4952540898327008344LL;
signed char var_12 = (signed char)121;
int var_14 = -355893356;
int var_15 = -418987623;
unsigned long long int var_17 = 3277682999281291773ULL;
int zero = 0;
long long int var_18 = -6049381760573000416LL;
int var_19 = -1566645496;
long long int var_20 = 2216968753926734955LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
