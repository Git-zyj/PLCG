#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)108;
unsigned int var_6 = 435630667U;
long long int var_11 = 7666486127638417716LL;
long long int var_12 = 8445225055771272632LL;
int var_14 = 727255715;
short var_15 = (short)-5891;
unsigned int var_16 = 3780534571U;
signed char var_18 = (signed char)56;
int zero = 0;
unsigned char var_19 = (unsigned char)37;
unsigned int var_20 = 2667815950U;
long long int var_21 = -6372759036361252577LL;
signed char var_22 = (signed char)62;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
