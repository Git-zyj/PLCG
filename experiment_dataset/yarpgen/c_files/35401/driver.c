#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3553317476155019765LL;
unsigned int var_1 = 528052574U;
unsigned int var_2 = 2058112337U;
unsigned long long int var_8 = 2874239551808332029ULL;
long long int var_10 = 7988481026063552000LL;
unsigned int var_12 = 1140925694U;
int zero = 0;
unsigned int var_13 = 1317472763U;
signed char var_14 = (signed char)-3;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
