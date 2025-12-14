#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1418352610;
signed char var_4 = (signed char)92;
unsigned long long int var_5 = 14822028128192535469ULL;
long long int var_7 = -4469707696985752388LL;
int var_9 = -1228195680;
int var_11 = 1865671457;
long long int var_12 = 8319320805176099889LL;
int var_13 = -872641498;
int zero = 0;
unsigned int var_14 = 2792669142U;
unsigned int var_15 = 20748365U;
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
