#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1763214318829946719LL;
int var_2 = 72754274;
unsigned int var_7 = 1247401604U;
short var_10 = (short)14110;
short var_13 = (short)12669;
unsigned char var_14 = (unsigned char)51;
long long int var_15 = 1223628805399969229LL;
int zero = 0;
unsigned int var_18 = 1435013308U;
signed char var_19 = (signed char)-56;
long long int var_20 = -5532778184805817453LL;
signed char var_21 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
