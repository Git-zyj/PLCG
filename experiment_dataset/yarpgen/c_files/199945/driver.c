#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2037935184;
unsigned int var_6 = 1666450405U;
unsigned long long int var_7 = 6837760312489755044ULL;
signed char var_10 = (signed char)-102;
unsigned long long int var_11 = 6868285369793773001ULL;
signed char var_14 = (signed char)-35;
unsigned char var_15 = (unsigned char)56;
int zero = 0;
short var_17 = (short)19525;
int var_18 = -519208918;
unsigned int var_19 = 982163216U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
