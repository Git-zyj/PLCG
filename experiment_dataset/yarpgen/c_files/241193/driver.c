#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1691879306140115705ULL;
long long int var_11 = -5638122099176089508LL;
long long int var_12 = 6389836112043056928LL;
unsigned short var_13 = (unsigned short)43571;
unsigned long long int var_16 = 3875745601265451745ULL;
long long int var_17 = -3280295239293305555LL;
int zero = 0;
unsigned long long int var_19 = 4015794238585541870ULL;
long long int var_20 = 6788380567447956823LL;
unsigned long long int var_21 = 1686839139821066113ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
