#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14025818517628078722ULL;
long long int var_1 = 8233602027715231448LL;
unsigned long long int var_2 = 11245362944464223153ULL;
long long int var_4 = 3810399890232458102LL;
unsigned long long int var_5 = 4643046320523688314ULL;
unsigned long long int var_6 = 9921300257114985685ULL;
int var_7 = -431454813;
long long int var_8 = -949222267225048611LL;
unsigned short var_9 = (unsigned short)1830;
int zero = 0;
unsigned long long int var_11 = 13348660130004745807ULL;
int var_12 = 1096989217;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
