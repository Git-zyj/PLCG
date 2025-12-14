#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-87;
long long int var_3 = 6812164888329445935LL;
long long int var_8 = -44923678517397917LL;
unsigned long long int var_11 = 14931117875202063543ULL;
int var_12 = -1253114929;
int zero = 0;
unsigned long long int var_13 = 5010276707120508477ULL;
long long int var_14 = 7156429843092762517LL;
long long int var_15 = -7574276956416920465LL;
long long int var_16 = 5959317909650922045LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
