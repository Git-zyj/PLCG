#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17563992667333785954ULL;
short var_2 = (short)26881;
unsigned long long int var_3 = 12297063401866604670ULL;
short var_4 = (short)-24996;
unsigned int var_5 = 3635482278U;
long long int var_7 = 3455096238770833004LL;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1544336593U;
unsigned char var_11 = (unsigned char)115;
unsigned long long int var_12 = 17229946351422281627ULL;
long long int var_13 = -6642366185705200057LL;
int zero = 0;
long long int var_14 = -6539431733767355762LL;
signed char var_15 = (signed char)-86;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
