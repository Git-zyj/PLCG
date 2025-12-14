#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)55;
short var_3 = (short)4697;
int var_4 = -651390477;
long long int var_6 = -4956486191697001396LL;
unsigned long long int var_7 = 1052030770312737886ULL;
short var_8 = (short)30795;
signed char var_9 = (signed char)35;
short var_13 = (short)822;
unsigned long long int var_15 = 8012248465763492244ULL;
int var_16 = -713006539;
int zero = 0;
long long int var_17 = -2477505152667544552LL;
unsigned int var_18 = 2430479422U;
unsigned long long int var_19 = 8380784044870472878ULL;
unsigned long long int var_20 = 16830973427428660738ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
