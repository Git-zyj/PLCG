#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7751536478680882094LL;
int var_1 = -412691760;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 2692039063U;
unsigned int var_9 = 1286515464U;
unsigned int var_12 = 3682612415U;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)212;
unsigned char var_17 = (unsigned char)3;
short var_18 = (short)3111;
signed char var_19 = (signed char)79;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
