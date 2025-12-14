#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18121;
unsigned char var_7 = (unsigned char)77;
unsigned int var_10 = 517157711U;
short var_11 = (short)-4281;
signed char var_14 = (signed char)68;
unsigned int var_15 = 705701821U;
int zero = 0;
long long int var_16 = 3227356041713470920LL;
short var_17 = (short)-24594;
unsigned int var_18 = 2124967043U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
