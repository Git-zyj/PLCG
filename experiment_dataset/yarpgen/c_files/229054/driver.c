#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1619658266;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 3950572056U;
long long int var_9 = 2907343058584936146LL;
long long int var_10 = -7755563679217021025LL;
unsigned long long int var_11 = 10562808170621578263ULL;
int var_15 = 769352845;
unsigned long long int var_16 = 3886708653192172668ULL;
unsigned long long int var_18 = 11530230827492493225ULL;
int zero = 0;
unsigned long long int var_20 = 10796494728859675860ULL;
unsigned int var_21 = 3338534421U;
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
