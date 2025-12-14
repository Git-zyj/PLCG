#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1557187505;
long long int var_9 = -8411102784614522467LL;
short var_14 = (short)-8259;
unsigned int var_17 = 2402820642U;
int zero = 0;
short var_18 = (short)-17426;
_Bool var_19 = (_Bool)0;
long long int var_20 = 2445880228537158965LL;
int var_21 = -987707196;
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
