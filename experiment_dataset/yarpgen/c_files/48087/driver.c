#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)31218;
long long int var_7 = -2925073125751054083LL;
unsigned long long int var_8 = 18024260517711231493ULL;
unsigned short var_9 = (unsigned short)39290;
long long int var_11 = -3155189848793716368LL;
unsigned int var_16 = 2909323322U;
unsigned int var_18 = 1302618422U;
int zero = 0;
unsigned int var_20 = 3760028538U;
unsigned int var_21 = 383164138U;
void init() {
}

void checksum() {
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
